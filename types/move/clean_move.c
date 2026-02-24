/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:15:19 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 18:15:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	clean_move(t_move *move)
{
	move->adir = 0;
	move->bdir = 0;
	move->apin = 0;
	move->bpin = 0;
	move->atop = 0;
	move->btop = 0;
	move->cost = 0;
}
