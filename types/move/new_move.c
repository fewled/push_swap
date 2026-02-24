/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:44:15 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 17:44:16 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

t_move	*new_move()
{
	t_move	*new_move;

	if (!(new_move = malloc(sizeof(t_move))))
		return ((t_move *)0);
	new_move->cost = 0;
	new_move->acost = 0;
	new_move->bcost = 0;
	new_move->atop = 0;
	new_move->btop = 0;
	new_move->apin = 0;
	new_move->bpin = 0;
	new_move->adir = 0;
	new_move->bdir = 0;
	return (new_move);
}
