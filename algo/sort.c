/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:52:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/09 19:06:34 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void push_best(t_package *package)
{
}

void	sort(t_package *package)
{
	pb(package);
	pb(package);
	while (package->a->top > 3)
	{
		find_best(package);
		// Should set in package->a->best the index of the less
		// expensive element to move
		push_best(package);
		// Should apply moves to the element in package->a->best
	}
	arrange(package);
	while (package->b->top > 0)
	{
		// Transfer back from b to a
	}
	// Bring the smallest number at the top of the stack
}
