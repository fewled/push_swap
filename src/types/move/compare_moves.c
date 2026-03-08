/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:35:33 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/02 12:35:35 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	compare_moves(t_package *package)
{
	if (package->current->cost < package->best->cost
		|| !package->best->cost)
	{
		package->best->acost = package->current->acost;
		package->best->bcost = package->current->bcost;
		package->best->cost = package->current->cost;
		package->best->apin = package->current->apin;
		package->best->bpin = package->current->bpin;
		package->best->abtm = package->current->abtm;
		package->best->bbtm = package->current->bbtm;
		package->best->aval = package->current->aval;
		package->best->bval = package->current->bval;
		package->best->adir = package->current->adir;
		package->best->bdir = package->current->bdir;
	}
	clean_move(package->current);
}
