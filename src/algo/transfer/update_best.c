/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_best.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:34:08 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 12:37:53 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	update_best(t_package *package)
{
	package->best_move->cost = package->current_move->cost;
	package->best_move->acost = package->current_move->acost;
	package->best_move->bcost = package->current_move->bcost;
	package->best_move->adir = package->current_move->adir;
	package->best_move->bdir = package->current_move->bdir;
	package->best_move->atop = package->current_move->atop;
	package->best_move->btop = package->current_move->btop;
	package->best_move->apin = package->current_move->apin;
	package->best_move->bpin = package->current_move->bpin;
}
