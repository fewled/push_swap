/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:22 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 07:34:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    push(t_stack *from, t_stack *to)
{
        if (from->top == -1)
                return ;
        to->top++;
        to->content[to->top] = from->content[from->top];
        from->top--;
}

void	pa(t_stack *b, t_stack *a)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_putstr("pb\n");
}
