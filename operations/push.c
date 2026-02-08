/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:22 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:39:01 by vpolard          ###   ########.fr       */
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
