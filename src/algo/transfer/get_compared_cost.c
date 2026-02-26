/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_compared_cost.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:40:03 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 12:28:17 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	get_compared_cost(t_move *move)
{
	if (move->adir == move->bdir)
		move->cost = ft_biggest(move->acost, move->bcost);
	else
	{
		if (move->acost > move->bcost)
		{
			if (move->acost < (move->btop - move->bpin)
				|| move->acost < (move->bpin + 1))
				move->cost = move->acost;
		}
		else
		{
			if (move->bcost < (move->atop - move->apin)
				|| move->bcost < (move->apin + 1))
				move->cost = move->bcost; 
		}
	}
	if (!move->cost)
		move->cost = move->acost + move->bcost;
}
