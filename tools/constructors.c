/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/02 16:00:33 by vpolard          ###   ########.fr       */
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
			|| ft_isint(ft_atoll(package->data[index])))
			return (0);
		package->a->content[index] = ft_atoi(package->data[index]);
		index--;
	}
	while (index < package->size - 1)
	{
		ping = index + 1;
		while (ping < package->size - 1)
		{
			if (package->a->content[ping] == package->a->content[index])
				return (0);
			ping++;
		}
		index++;
	}
	return (1);
}

static int	build_from_string(t_package *package)
{
	package->size = ft_count_words(package->data[0]);
	if (!(package->a = malloc(sizeof(t_stack)))
		|| !(package->b malloc(sizeof(t_stack)))
		|| !(package->a->content = malloc(sizeof(int) * package->size))
		|| !(package->b->content = malloc(sizeof(int) * package->size)))
		return (0);
	if ((package->data = ft_split(package->data)))
		return (parse_content(package));
}

static int	build_from_list(t_package *package)
{
	if (!(package->a = malloc(sizeof(t_stack)))
		|| !(package->b = malloc(sizeof(t_stack)))
		|| !(package->a->content = malloc(sizeof(int) * package->size))
		|| !(package->b->content = malloc(sizeof(int) * package->size)))
		return (0);
	return (parse_content(package));
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	if (!(package = malloc(sizeof(t_package))))
		return ((t_package *)0);
	package->size = arg_count - 1;
	package->data = &(arg_list + 1);
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	if (ft_count_words(package->data[0]) > 2)
		if (!build_from_string(package))
			return (clean(package), (t_package *)0);
	if (package->size > 2)
		if (!build_from_list(package))
			return (clean(package), (t_package *)0);
	return (package);
}
