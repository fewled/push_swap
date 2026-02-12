/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/12 14:51:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The purpose of the find_best function is to retreive the index of the element
// in stack 'a' that is the less expensive to place correctly into stack 'b'

// This index will be stored in package->stack->best

#include "algo.h"

static void    find_smallest_gap(t_package *package)
// (i) Retrieve the closest element (numeric) to the pinned element in the stack a
{
	int	index;
	int	gap;

	index = package->b->top;
	gap = ft_abs(package->a->content[package->a->pin]
			- package->b->content[index])
	package->b->pin = index--;
	while (index >= 0)
	{
		if (ft_abs(package->a->content[package->a->pin]
				- package->b->content[index]) < gap)
			package->b->pin = index;
		index--;
	}
}

static void	find_direction(t_stack *stack)
{
	stack->direction = 0;
	if (stack->pin > (stack->top / 2))
		stack->direction = 1;
}

void	unload(t_package *package)
{
	// Find the new less-expensive move
	package->a->pin = package->a->top;
	while (package->a->pin >= 0)
	{
		// Determine whether the targeted element in 'a' is near top or bottom ((1-yes)(0-no))
		find_direction(package->a);
		find_smallest_gap(package);		// Set package->b->pin using package->a->pin
		find_direction(package->b);
		find_cost(package);				// Find cost from both pins, update best cost if found
		package->a->pin--;
	}
	// Use package->move infos to perform the move
}
