/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:24:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/02 12:24:10 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	lead_by_a(t_package *package)
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

void	lead_by_b(t_package *package)
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

void	no_lead(t_package *package)
{
	t_move	*move;

	move = package->best;
	while (package->a->content[move->atop] != move->aval)
	{
		if (move->adir)
			ra(package);
		if (!move->bdir)
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
	if ((move->adir == move->bdir)
		|| ((move->bdir && (move->acost > (move->btop - move->bpin)))
			|| (!move->bdir && (move->acost > (move->bpin + 1))))
		|| ((move->adir && (move->bcost > (move->atop - move->apin)))
			|| (!move->adir && (move->bcost > (move->apin + 1)))))
	{
		if (move->acost > move->bcost)
			lead_by_a(package);
		if (move->acost < move->bcost)
			lead_by_b(package);
	}
	else
	{
		no_lead(package);
	}
	if (move->aval < move->bval)
		rb(package);
	pb(package);
	clean_move(package->best);
}
