/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:57:56 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 07:35:10 by vpolard          ###   ########.fr       */
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

void	sa(t_stack *a)
{
	swap(a);
	ft_putstr("sa\n");
}

void	sb(t_stack *b)
{
	swap(b);
	ft_putstr("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_putstr("ss\n");
}
