/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:46:45 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/10 14:48:02 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The purpose of the find_cost function is to search for the cost of
// moving a specific element of stack 'a' next to the most appropriate
// way in stack 'b'

// If the cost found for the specific element of 'a' is lower than the
// previously lower cost registered, then the new lowest cost should be updated
// in package->cost

// The package->a->best should also be updated with the index of element that
// is involved with the new lowest cost

#include "algo.h"

// Both stacks pins must be already set in order to calculate the cost

static void	shared_direction(t_package *package);
// Handles cost calculation when both the element in 'a'
// and the closest element (numericaly-wise) in 'b' are both
// above the middle of the stack

static void smart_direction(t_package *package);
// Handles cost calculation when the element in 'a' and the
// closest element (numericaly-wise) in 'b' are in different
// positions from the middle of their respective stack, and where
// the number of shift that needs to be made from the one stack is
// bigger than the size of the other stack :

// a   b    =>	The element from 'a' that needs to be pushed is '1'
// -   -      	The nearest numerical element in 'b' is 2
// 8   12     	'1' is closer to the bottom 
// 4   2	  	'2' is closer to the top			-> Not same direction  
// 10  20      
// 13  17     	'1' can be placed on the top using 5 moves (bottom->top)
// 15  13		'2' can be placed on the bottom using 2 moves (top->bottom)
// 16			(5 + 2) + 1 = 8
// 1
// 5			or, when not taking direction in consideration
// 3
// 7			'1' can be placed on the top using 5 moves (bottom->top)
// 9			'2' can be placed on the bottom using 3 moves (bottom-top)
// 				Because both use (bottom->top), moves can be shared.
// 				It gives (5) + 1 = 6
//
// 	In general, we should pay attention to the number of moves (and their
// 	direction) of the biggest stack, and see if the number of move needed
// 	to move the element of the biggest stack can be used to place the element
// 	of the smallest stack on the go

static void	opposite_direction(t_package *package);
// Handles cost calculation when the element in 'a' and the
// closest element (numericaly-wise) in 'b' are in different
// posistions from the middle of their respective stack, and where 
// the number of shift that needs to be made from one stack is 
// smaller than the size of the other stack

void	find_cost(t_package *package)
{
	if (package->a->direction == package->b->direction)
		return (shared_direction(package));
	return (smart_direction(package), opposite_direction(package));
}
