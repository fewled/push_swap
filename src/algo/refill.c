/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refill.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:48:10 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/02 15:48:15 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void max_as_top(t_package *package)
{
	int	index;
	int	max_index;
	int	max_val;
	int	max_dir;

	index = package->b->top;
	max_index = index;
	while (index >= 0)
	{
		if (package->b->content[max_index] < package->b->content[index])
			max_index = index;
		index--;
	}
	max_val = package->b->content[max_index];
	max_dir = 0;
	if (max_index > (package->b->top / 2))
		max_dir = 1;
	while (package->b->content[package->b->top] != max_val)
	{
		if (max_dir)
			rb(package);
		if (!max_dir)
			rrb(package);
	}
}

void	refill(t_package *package)
{
	max_as_top(package);
	while (package->b->top >= 0)
		pa(package);
}
