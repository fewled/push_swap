/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:22 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:25:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	push(t_stack *from, t_stack *to)
{
	int	index;
	int	value;

	if (from->btm >= 0)
	{
		value = from->content[0];
		index = 1;
		while (index <= from->btm)
		{
			from->content[index - 1] = from->content[index];
			index++;
		}
		from->btm--;
		to->btm++;
		index = to->btm;
		while (index > 0)
		{
			to->content[index] = to->content[index - 1];
			index--;
		}
		to->content[0] = value;
	}
}

void	pa(t_package *package)
{
	push(package->b, package->a);
	ft_putstr("pa\n");
}

void	pb(t_package *package)
{
	push(package->a, package->b);
	ft_putstr("pb\n");
}
