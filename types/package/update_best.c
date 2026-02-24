/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_best.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:22:32 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/24 14:22:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	update_best(t_package *package)
{
	package->best_move->cost = package->current_move->cost;
	package->best_move->apin = package->current_move->apin;
	package->best_move->bpin = package->current_move->bpin;
	package->best_move->adir = package->current_move->adir;
	package->best_move->bdir = package->current_move->adir;
	package->best_move->atop = package->current_move->atop;
	package->best_move->btop = package->current_move->btop;
}
