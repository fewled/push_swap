/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:52:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/10 10:36:54 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	adjust(t_package *package);
// (i) Ensures that the package->a->content[package->a->top] is the smallest element in the stack
// 1. Get the current index of the smallest element
// 2. Get its direction (if its closer to the top or the bottom of the stack)
// 3. Use the least amount of moves to place it at the top of the stack
{
	int	min;
	int	index;

	index = package->a->top;
	min = package->a->content[index];
	while (index >= 0)
	{
		if (package->a->content[index] < min)
			min = package->a->content[index];
		index--;
	}
	while (package->a->content[index] != min)
		index++;
	if (index > (package->a->top / 2))
		while (package->a->content[package->a->top] != min)
			ra(package);
	else
		while (package->a->content[package->a->top] != min)
			rra(package);
}

void	sort(t_package *package)
// (i) Orchestrates the sorting process calling functions
// 1. Place the first two elements of 'a' in 'b'
// 2. While 'a' contains more than three elements, place the next best element to 'b'
// 3. Sort the three elements remaining in 'a'
// 4. Bring back elements in 'a'
// 5. Adjust the stack content to have the smallest element as the first one
{
	pb(package);
	pb(package);
	while (package->a->top > 3)
		unload(package);
	// arrange(package);
	while (package->b->top > 0)
		// refill(package);
	// adjust(package);	
}
