/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 09:46:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 19:02:12 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void    get_closest(t_package *package)
{
	int	closest;
	int	min_diff;
	int	current_diff;
	int	index;

	closest = 0;
	min_diff = ft_abs(package->b->content[closest]
		- package->a->content[package->a->pin]);
	index = 0;
	while (index <= package->b->btm)
	{
		current_diff = ft_abs(package->b->content[index]
			- package->a->content[package->a->pin]);
		if (current_diff < min_diff)
		{
			min_diff = current_diff;
			closest = index;
		}
		index++;
	}
	package->b->pin = closest;
}

static void    get_directions(t_package *package)
{
	t_move *move;

	move = package->current;
	move->apin = package->a->pin;
	move->bpin = package->b->pin;
	move->aval = package->a->content[move->apin];
	move->bval = package->b->content[move->bpin];
	move->abtm = package->a->btm;
	move->bbtm = package->b->btm;
	move->adir = 1;
	if (move->apin > (move->abtm / 2))
		move->adir = 0;
	move->bdir = 1;
	if (move->bpin > (move->bbtm / 2))
		move->bdir = 0;
}

static void	get_individual_cost(t_package *package)
{
	t_move *move;

	move = package->current;
	if (move->adir)
		move->acost = move->apin;
	if (!move->adir)
		move->acost = move->abtm - move->apin + 1; 
	if (move->bdir)
		move->bcost = move->bpin;
	if (!move->bdir)
		move->bcost = move->bbtm - move->bpin + 1;
	if (move->aval < move->bval)
		move->bcost++;
	if (move->abtm == 0)
		move->acost = 0;
	if (move->bbtm == 0)
		move->bcost = 0;
}

static void	get_compared_cost(t_package *package)
{
	t_move *move;

	move = package->current;
	if (move->adir == move->bdir)
		move->cost = ft_biggest(move->acost, move->bcost);
	if (is_compatible(package->current))
	{
		if (move->acost > move->bcost)
			move->cost = move->acost;
		if (move->acost < move->bcost)
			move->cost = move->bcost;
	}
	if (!move->cost && (move->acost || move->bcost))
		move->cost = move->acost + move->bcost;
	move->cost++;
}

void    transfer(t_package *package)
{
	package->a->pin = package->a->btm;
	get_closest(package);
	printf("[i] %d (in a) is attached to %d (in b)\n",
		package->a->content[package->a->pin],
		package->b->content[package->b->pin]);
	get_directions(package);
	printf("[i] adir (%d) bdir (%d)\n",
		package->current->adir,
		package->current->bdir);
	get_individual_cost(package);
	printf("[i] acost (%d) bcost (%d)\n",
		package->current->acost,
		package->current->bcost);
	get_compared_cost(package);
	printf("[i] cost (%d)\n", package->current->cost);
	/*
	while (package->a->btm > 2)
	{
		package->a->pin = package->a->top;
		while (package->a->pin >= 0)
		{
			get_closest(package);
			get_directions(package);
			get_individual_cost(package);
			get_compared_cost(package);
			compare_moves(package);
			package->a->pin--;
		}
		apply_move(package);
	}
	*/
}
