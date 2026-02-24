/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/12 14:51:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

static void	get_closest(t_package *package)
{
	int		closest;
	t_stack *a;
	t_stack	*b;

	b->pin = b->top;
	closest = b->top;
	while (b->pin >= 0)
	{
		if (a->content[a->pin] > b->content[b->pin])
			if (ft_abs(a->content[a->pin] - b->content[b->pin]) < closest)
				closest = b->pin;
		if (a->content[a->pin] < b->content[b->pin])
			if (ft_abs(b->content[b->pin] - a->content[a->pin]) < closest)
				closest = b->pin;
		package->b->pin--;
	}
	package->current_move->bpin = closest;
}

static void	get_directions(t_package *package)
{
	package->current_move->adir = 0;
	if (package->a->pin > (package->a->top / 2))
		package->current_move->adir = 1;
	package->current_move->bdir = 0;
	if (package->b->pin > (package->a->top / 2))
		package->current_move->bdir = 1;
	package->current_move->atop = package->a->top;
	package->current_move->btop = package->b->top;
}

/*

void	get_cost(t_move *move)
{
	int		acost;
	int		bcost;

	// Find both placing cost
	if (move->adir)
		acost = move->atop - move->apin;
	if (!move->adir)
		acost = move->apin + 1;
	if (move->bdir)
		bcost = move->btop - move->bpin;
	if (!move->bdir)
		bcost = move->bpin + 1;
	// Check if it could bring the other along
	if (move->adir == move->bdir)
		move->cost = ft_biggest(acost, bcost) + 1;
	else
	{
		if // does the biggest can bring the smallest
		{

		}
		else // different direcitons
		{
			move->cost = acost + bcost + 1;
		}
	}
}

*/

void	transfer(t_package *package)
{
	int	count;
	int	closest;

	count = package->a->top;
	while (count-- >= 0)
	{
		package->current_move->apin = count;
		// Get pins and directions
		get_closest(package);
		get_directions(package);
		// Get cost estimations
		// get_cost(package->current_move);
		// Clean current move
		if (package->best_move->cost > package->current_move->cost
			|| !package->best_move->cost)
			update_best(package);
		clean_move(package->current_move);
	}
	// Apply best move
	// apply_move(package->best_move);
	clean_move(package->best_move);
}
