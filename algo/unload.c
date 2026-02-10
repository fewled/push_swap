/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/10 15:26:16 by vpolard          ###   ########.fr       */
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

static void	current_direction(t_stack *stack)
{
	stack->direction = 0;
	if (stack->pin > (stack->top / 2))
		stack->direction = 1;
}

static void	best_direction(t_stack *stack)
{
	stack->direction = 0;
	if (stack->best > (stack->top / 2))
		stack->direction = 1;
}

void	unload(t_package *package)
{
	// Find the new less-expensive move
	package->a->pin = package->a->top;
	while (package->a->pin >= 0)
	{
		// Determine whether the targeted element in 'a' is near top or bottom ((1-yes)(0-no))
		current_direction(package->a);
		find_smallest_gap(package);		// Set package->b->pin using package->a->pin 
		find_cost(package);				// Find cost from both pins, update best cost if found
		package->a->pin--;
	}
	best_direction(package->a);
	best_direction(package->b);
	// Use both stack->best to move from a to b
}
