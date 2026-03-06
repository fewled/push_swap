/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:59:10 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/02 15:59:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	adjust(t_package *package)
{
	int	min_index;
	int	min_dir;
	int	min_val;
	int	index;

	index = package->a->top;
	min_index = index;
	while (index >= 0)
	{
		if (package->a->content[min_index] > package->a->content[index])
			min_index = index;
		index--;
	}
	min_val = package->a->content[min_index];
	min_dir = 0;
	if (min_index > (package->a->top / 2))
		min_dir = 1;
	while (package->a->content[package->a->top] != min_val)
	{
		if (min_dir)
			ra(package);
		if (!min_dir)
			rra(package);
	}
}
