/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 12:23:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	transfer(t_package *package)
{
	int	count;

	count = package->a->top;
	while (count-- >= 0)
	{
		package->current_move->apin = count;
		// Get pins and directions
		get_closest(package);
		get_directions(package);
		// Get cost estimations
		get_stacks_cost(package->current_move);
		get_compared_cost(package->current_move);
		adjust_cost(package);	
		// Clean current move
		if (package->best_move->cost > package->current_move->cost
			|| !package->best_move->cost)
			update_best(package);
		clean_move(package->current_move);
	}
	// Apply best move
	// apply_move(package->best_move);
	clean_move(package->best_move);
}
