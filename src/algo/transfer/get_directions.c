/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_directions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:59:18 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 12:01:07 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	get_directions(t_package *package)
{
	package->current_move->adir = 0;
	if (package->a->pin > (package->a->top / 2))
		package->current_move->adir = 1;
	package->current_move->bdir = 0;
	if (package->b->pin > (package->b->top / 2))
		package->current_move->bdir = 1;
	package->current_move->atop = package->a->top;
	package->current_move->btop = package->b->top;
}
