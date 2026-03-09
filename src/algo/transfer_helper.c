/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:24:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 19:01:05 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

int	is_compatible(t_move *move)
{	
	if (move->adir != move->bdir)
	{
		if (move->acost > move->bcost)
		{
			if (move->bdir)
				if (move->acost > (move->bbtm - move->bpin))
					return (1);
			if (!move->bdir)
				if (move->acost > (move->bpin + 1))
					return (1);
		}
		if (move->acost < move->bcost)
		{
			if (move->adir)
				if (move->bcost > (move->abtm - move->apin))
					return (1);
			if (!move->adir)
				if (move->bcost > (move->apin + 1))
					return (1);
		}
	}
	return (0);
}

/*

static void	lead_by_a(t_package *package)
{
	t_move *move;

	move = package->best;
	while (package->b->content[move->btop] != move->bval)
	{
		if (move->adir)
			rr(package);
		if (!move->adir)
			rrr(package);
	}
	while (package->a->content[move->atop] != move->aval)
	{
		if (move->adir)
			ra(package);
		if (!move->adir)
			rra(package);
	}

}

static void	lead_by_b(t_package *package)
{
	t_move	*move;

	move = package->best;
	while (package->a->content[move->atop] != move->aval)
	{
		if (move->bdir)
			rr(package);
		if (!move->bdir)
			rrr(package);
	}
	while (package->b->content[move->btop] != move->bval)
	{
		if (move->bdir)
			rb(package);
		if (!move->bdir)
			rrb(package);
	}
}

static void	no_lead(t_package *package)
{
	t_move	*move;

	move = package->best;
	while (package->a->content[move->atop] != move->aval)
	{
		if (move->adir)
			ra(package);
		if (!move->adir)
			rra(package);
	}
	while (package->b->content[move->btop] != move->bval)
	{
		if (move->bdir)
			rb(package);
		if (!move->bdir)
			rrb(package);
	}
}

void	apply_move(t_package *package)
{
	t_move *move;

	move = package->best;

	if (move->adir == move->bdir)
	{
		if (move->acost >= move->bcost)
			lead_by_a(package);
		if (move->acost < move->bcost)
			lead_by_b(package);
	}
	else
	{
		if (!is_compatible(package->best))
			no_lead(package);
		else
		{
			if (move->acost > move->bcost)
				lead_by_a(package);
			if (move->acost < move->bcost)
				lead_by_b(package);
		}
	}
	if (move->aval < move->bval)
		rb(package);
	pb(package);
	clean_move(package->best);
}

*/
