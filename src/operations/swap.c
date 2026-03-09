/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:57:56 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:26:02 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	swap(t_stack *stack)
{
	int	temp;

	if (stack->btm <= 0)
		return ;
	temp = stack->content[0];
	stack->content[0] = stack->content[1];
	stack->content[1] = temp;
}

void	sa(t_package *package)
{
	swap(package->a);
	ft_putstr("sa\n");
}

void	sb(t_package *package)
{
	swap(package->b);
	ft_putstr("sb\n");
}

void	ss(t_package *package)
{
	swap(package->a);
	swap(package->b);
	ft_putstr("ss\n");
}
