/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/31 09:07:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	find_duplicate(t_package *package)
{
	int	*list;
	int	index;
	int	ping;

	list = package->data;
	ping = 0;
	while (ping < package->size)
	{
		index = ping + 1;
		while (index < package->size)
		{
			if (list[ping] == list[index])
				return (1);
			index++;
		}
		ping++;
	}
	return (0);
}


static int	feed_package(t_package *package, int arg_count, char **arg_list)
{
	int	index;

	arg_count--;
	arg_list++;
	package->data = malloc(sizeof(int) * arg_count);
	if (!package->data)
		return (0);
	index = arg_count - 1;
	while (index >= 0)
	{
		if (!ft_isnum(arg_list[index]))
			return (0);
		if (!ft_isint(ft_atoll(arg_list[index])))
			return (0);
		package->data[index] = ft_atoi(arg_list[(arg_count - 1) - index]);
		index--;
	}
	return (1);
}

static t_stack	*new_stack(t_package *package, char id)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ((t_stack *)0);
	if (package->data)
	{
		stack->content = package->data;
		stack->top = package->size - 2;
		package->data = (int *)0;
	}
	else
	{
		stack->content = malloc(sizeof(int) * package->size);
		if (!stack->content)
			return ((t_stack *)0);
		stack->top = -1;
	}
	stack->capacity = package->size - 1;
	stack->id = id;
	return (stack);
}

static void	set_fields(t_package *package, int size)
{
	package->data = (int *)0;
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	package->size = size;
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	package = malloc(sizeof(t_package));
	if (!package)
		return ((t_package *)0);
	set_fields(package, arg_count);
	if (!feed_package(package, arg_count, arg_list))
		return (clean(package), (t_package *)0);
	if (find_duplicate(package))
		return (clean(package), (t_package *)0);
	package->a = new_stack(package, 'a');
	if (!package->a)
		return (clean(package), (t_package *)0);
	package->b = new_stack(package, 'b');
	if (!package->b)
		return (clean(package), (t_package *)0);
	return (package);
}
