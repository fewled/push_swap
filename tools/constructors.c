/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:30:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	parse_content(t_package *package)
{
	int	index;
	int	ping;

	index = package->size - 1;
	while (index >= 0)
	{
		if (!ft_isnum(package->data[index])
			|| !ft_isint(ft_atoll(package->data[index])))
			return (0);
		package->a->content[index] = ft_atoi(package->data[index]);
		index--;
	}
	index = 0;
	while (index < package->size - 1)
	{
		ping = index + 1;
		while (ping < package->size)
			if (package->a->content[ping++] == package->a->content[index])
				return (0);
		index++;
	}
	return (1);
}

static int	build_stacks(t_package *package)
{
	if (!(package->a = malloc(sizeof(t_stack)))
		|| !(package->b = malloc(sizeof(t_stack)))
		|| !(package->a->content = malloc(sizeof(int) * package->size))
		|| !(package->b->content = malloc(sizeof(int) * package->size)))
		return (0);
	package->a->top = package->size - 1;
	package->b->top = -1;
	return (1);
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	if (!(package = malloc(sizeof(t_package))))
		return ((t_package *)0);
	package->data = (char **)0;
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	if (arg_count == 2)
	{
		package->size = ft_count_words(arg_list[1]);
		if (!(package->data = ft_split(arg_list[1])))
			return (0);
	}
	else
	{
		package->size = arg_count - 1;
		package->data = arg_list + 1;
	}
	if (!(build_stacks(package))
		|| !(parse_content(package)))
		return (clean(package, arg_count), (t_package *)0);
	return (package);
}
