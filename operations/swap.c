/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:57:56 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:39:52 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    swap(t_stack *stack)
{
        int     *content;
        int     top;
        int     temp;

        if (stack->top < 1)
                return ;
        content = stack->content;
        top = stack->top;
        temp = content[top];
        content[top] = content[top - 1];
        content[top - 1] = temp;
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
