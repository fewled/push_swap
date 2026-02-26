/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stacks_cost.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:36:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 11:38:28 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	get_stacks_cost(t_move *move)
{
	if (move->adir)
		move->acost = move->atop - move->apin;
	else
		move->acost = move->apin + 1;
	if (move->bdir)
		move->bcost = move->btop - move->bpin;
	else
		move->bcost = move->bpin + 1;
}
