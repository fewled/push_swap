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

void	refill(t_package *package)
{
	int	value;
	int	index;
	int	next;

	while (package->b->top >= 0)
	{
		value = package->b->content[package->b->top];
		index = package->a->top;
		while (index >= 0)
		{
			if (index == 0)
				next = package->a->content[package->a->top];
			else
				next = package->a->content[index - 1];
			if ((package->a->content[index] < value && value < next)
				|| (package->a->content[index] > next
					&& (value > package->a->content[index] || value < next)))
				break ;
			index--;
		}
		while (package->a->content[package->a->top] != next)
			ra(package);
		pa(package);
	}
}