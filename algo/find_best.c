/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/09 18:38:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The purpose of the find_best function is to retreive the index of the element
// in stack 'a' that is the less expensive to place correctly into stack 'b'

// This index will be stored in package->stack->best

#include "algo.h"

static void    set_near_top(t_stack *stack);
static void    find_smallest_gap(t_package *package);

void	find_best(t_package *package)
{
	package->a->pin = package->a->top;
	while (package->a->pin >= 0)
	{
		set_near_top(package->a);
		find_smallest_gap(package);
		find_cost(package);
		package->a->pin--;
	}
}
