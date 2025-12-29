/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 14:58:13 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	find_duplicate(int *list, int len)
{
	int	index;
	int	ping;

	ping = 0;
	while (ping < len)
	{
		index = ping + 1;
		while (index < len)
		{
			if (list[ping] == list[index])
				return (1);
			index++;
		}
		ping++;
	}
	return (0);
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;
	int			index;

	arg_count--;
	package = malloc(sizeof(t_package));
	if (!package)
		return ((t_package *)0);
	package->data = malloc(sizeof(int) * arg_count);
	if (!package->data)
		return (clean_package(package), (t_package *)0);
	index = 0;
	arg_list++;
	while (index < arg_count)
	{
		if (!ft_isnum(arg_list[index]))
			return (clean_package(package), (t_package *)0);
		if (!ft_isint(ft_atoll(arg_list[index])))
			return (clean_package(package), (t_package *)0);
		package->data[index] = ft_atoi(arg_list[index]);
		index++;
	}
	if (find_duplicate(package->data, arg_count))
		return (clean_package(package), (t_package *)0);
	return (package->size = arg_count, package->is_valid = 1,
			find_median(package), package);
}

t_stack	*new_stack(t_package *package)
{
	t_stack	*stack;

	if (!package)
		return ((t_stack *)0);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ((t_stack *)0);
	if (package->data)
	{
		stack->content = package->data;
		stack->top = package->size - 1;
		package->data = (int *)0;
	}
	else
	{
		stack->content = malloc(sizeof(int) * package->size);
		if (!stack->content)
			return (free(stack), (t_stack *)0);
		stack->top = -1;
	}
	stack->capacity = package->size;
	return (stack);
}
