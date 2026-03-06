/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 09:46:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/28 09:46:45 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void    get_closest(t_package *package)
{
	int	closest;
	int	min_diff;
	int	current_diff;
	int	index;

	closest = package->b->top;
	min_diff = ft_abs(package->b->content[closest]
		- package->a->content[package->a->pin]);
	index = package->b->top;
	while (index >= 0)
	{
		current_diff = ft_abs(package->b->content[index]
			- package->a->content[package->a->pin]);
		if (current_diff < min_diff)
		{
			min_diff = current_diff;
			closest = index;
		}
		index--;
	}
	package->b->pin = closest;
}

static void    get_directions(t_package *package)
{
	package->current->apin = package->a->pin;
	package->current->bpin = package->b->pin;
	package->current->aval = package->a->content[package->current->apin];
	package->current->bval = package->b->content[package->current->bpin];
	package->current->atop = package->a->top;
	package->current->btop = package->b->top;
	package->current->adir = 0;
	if (package->current->apin > (package->current->atop / 2))
		package->current->adir = 1;
	package->current->bdir = 0;
	if (package->current->bpin > (package->current->btop / 2))
		package->current->bdir = 1;
}

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

void    transfer(t_package *package)
{
	while (package->a->top > 2)
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
}
