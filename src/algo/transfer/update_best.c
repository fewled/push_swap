/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_best.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:34:08 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 14:35:53 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	update_best(t_package *package)
{
	package->best->cost = package->current->cost;
	package->best->acost = package->current->acost;
	package->best->bcost = package->current->bcost;
	package->best->adir = package->current->adir;
	package->best->bdir = package->current->bdir;
	package->best->atop = package->current->atop;
	package->best->btop = package->current->btop;
	package->best->apin = package->current->apin;
	package->best->bpin = package->current->bpin;
	package->best->aval = package->current->aval;
	package->best->bval = package->current->bval;
}
