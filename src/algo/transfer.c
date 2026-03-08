/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 09:46:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 18:05:39 by vpolard          ###   ########.fr       */
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
	while (index >= package->b->btm)
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
	package->current->apin = package->a->pin;
	package->current->bpin = package->b->pin;
	package->current->aval = package->a->content[package->current->apin];
	package->current->bval = package->b->content[package->current->bpin];
	package->current->abtm = package->a->btm;
	package->current->bbtm = package->b->btm;
	package->current->adir = 1;
	if (package->current->apin > (package->current->abtm / 2))
		package->current->adir = 0;
	package->current->bdir = 1;
	if (package->current->bpin > (package->current->bbtm / 2))
		package->current->bdir = 0;
}

/*

static void	get_individual_cost(t_package *package)
{
	if (package->current->adir)
		package->current->acost = package->current->atop
			- package->current->apin;
	if (!package->current->adir)
		package->current->acost = package->current->apin + 1;
	if (package->current->bdir)
		package->current->bcost = package->current->btop
			- package->current->bpin;
	if (!package->current->bdir)
		package->current->bcost = package->current->bpin + 1;
	if (package->current->aval < package->current->bval)
		package->current->bcost++;
}

static void	get_compared_cost(t_package *package)
{
	t_move *move;

	move = package->current;
	if (move->adir == move->bdir)
		move->cost = ft_biggest(move->acost, move->bcost);
	else
	{
		if (move->acost > move->bcost && is_compatible(package->current))
			move->cost = move->acost;
		if (move->acost < move->bcost && is_compatible(package->current))
			move->cost = move->bcost;
	}
	if (!move->cost && (move->acost || move->bcost))
		move->cost = move->acost + move->bcost;
	move->cost++;
}

*/

void    transfer(t_package *package)
{
	package->a->pin = package->a->btm;
	get_closest(package);
	printf("[i] %d (in a) is attached to %d (in b)\n",
		package->a->content[package->a->pin],
		package->b->content[package->b->pin]);
	get_directions(package);
	printf("[i] a->pin (%d) b->pin (%d)\n",
		package->current->adir,
		package->current->bdir);
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
