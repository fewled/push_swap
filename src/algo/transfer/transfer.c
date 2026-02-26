/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 15:00:13 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	transfer(t_package *package)
{
	int	count;

	count = package->a->top;
	while (count-- >= 0)
	{
		package->current->aval = package->a->content[package->a->pin];
		package->current->apin = count;
		get_closest(package);
		get_directions(package);
		get_stacks_cost(package->current);
		get_compared_cost(package->current);
		adjust_cost(package);	
		if (package->best->cost > package->current->cost
			|| !package->best->cost)
			update_best(package);
		clean_move(package->current);
	}
	// apply_best(package);
	clean_move(package->best);
}
