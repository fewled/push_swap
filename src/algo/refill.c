/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refill.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:48:10 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:13:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static int	find_target_value(t_stack *stack_a, int value_to_push)
{
	int	index;
	int	next_value;

	index = 0;
	while (index <= stack_a->btm)
	{
		if (index == stack_a->btm)
			next_value = stack_a->content[0];
		else
			next_value = stack_a->content[index + 1];
		if ((stack_a->content[index] < value_to_push
				&& value_to_push < next_value) || (stack_a->content[index]
				> next_value && (value_to_push > stack_a->content[index]
					|| value_to_push < next_value)))
			return (next_value);
		index++;
	}
	return (stack_a->content[0]);
}

static int	find_target_index(t_stack *stack_a, int target_value)
{
	int	index;

	index = 0;
	while (index <= stack_a->btm)
	{
		if (stack_a->content[index] == target_value)
			return (index);
		index++;
	}
	return (0);
}

void	refill(t_package *package)
{
	int	value;
	int	target_index;
	int	target_value;

	while (package->b->btm >= 0)
	{
		value = package->b->content[0];
		target_value = find_target_value(package->a, val);
		target_index = find_target_index(package->a, t_val);
		while (package->a->content[0] != target_value)
		{
			if (target_index <= package->a->btm / 2)
				ra(package);
			else
				rra(package);
		}
		pa(package);
	}
}
