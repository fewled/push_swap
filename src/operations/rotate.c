/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/17 10:14:35 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rotate(t_stack *stack)
{
	int	value;
	int index;

	if (stack->btm > 0)
	{
		value = stack->content[0];
		index = 1;
		while (index < stack->btm)
		{
			stack->content[index - 1] = stack->content[index];
			index++;
		}
		stack->content[stack->btm] = value;
	}
}

void	ra(t_package *package)
{
	rotate(package->a);
	ft_putstr("ra\n");
}

void	rb(t_package *package)
{
	rotate(package->b);
	ft_putstr("rb\n");
}

void	rr(t_package *package)
{
	rotate(package->a);
	rotate(package->b);
	ft_putstr("rrr\n");
}
