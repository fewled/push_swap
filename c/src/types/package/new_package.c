/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_package.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:30:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/11 12:54:08 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

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

static int	build_structs(t_package *package)
{
	package->a = new_stack(package->size);
	package->b = new_stack(package->size);
	package->current = new_move();
	package->best = new_move();
	if (!package->a || !package->b
		|| !package->current || !package->best)
		return (0);
	package->b->btm = -1;
	return (1);
}

static void	prep_fields(t_package *package, int arg_count)
{
	package->argc = arg_count;
	package->data = (char **)0;
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	package->current = (t_move *)0;
	package->best = (t_move *)0;
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	package = malloc(sizeof(t_package));
	if (!package)
		return ((t_package *)0);
	package->status = 1;
	prep_fields(package, arg_count);
	if (arg_count == 2)
	{
		package->data = ft_split(arg_list[1]);
		package->size = ft_count_words(arg_list[1]);
		if (!package->data || package->size < 2)
			return (package->status = 0, package);
	}
	else
	{
		package->size = arg_count - 1;
		package->data = arg_list + 1;
	}
	if (!(build_structs(package))
		|| !(parse_content(package)))
		return (package->status = 0, package);
	return (package->status = 1, package);
}
