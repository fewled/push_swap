/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/17 10:14:53 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rev_rotate(t_stack *stack)
{
	int	last_value;
	int	index;

	if (stack->btm > 0)
	{
		last_value = stack->content[stack->btm];
		index = stack->btm;
		while (index > 0)
		{
			stack->content[index] = stack->content[index - 1];
			index--;
		}
		stack->content[0] = last_value;
	}
}

void	rra(t_package *package)
{
	rev_rotate(package->a);
	ft_putstr("rra\n");
}

void	rrb(t_package *package)
{
	rev_rotate(package->b);
	ft_putstr("rrb\n");
}

void	rrr(t_package *package)
{
	rev_rotate(package->a);
	rev_rotate(package->b);
	ft_putstr("rrr\n");
}
