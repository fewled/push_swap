/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:59:10 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:03:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	adjust(t_package *package)
{
	int	min_index;
	int	index;
	int	min_value;

	if (package->a->btm <= 0)
		return ;
	min_index = 0;
	index = 1;
	while (index <= package->a->btm)
	{
		if (package->a->content[index]
			< package->a->content[min_index])
			min_index = index;
		index++;
	}
	min_value = package->a->content[min_index];
	while (package->a->content[0] != min_value)
	{
		if (min_index <= package->a->btm / 2)
			ra(package);
		else
			rra(package);
	}
}
