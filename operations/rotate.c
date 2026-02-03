/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/03 17:32:07 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    rotate(t_stack *stack)
{
        int     *rotated;
        int     index;

        if (stack->top < 1)
                return ;
        rotated = malloc(sizeof(int) * stack->capacity);
        if (!rotated)
                return (ft_puterr("[x] Failed allocation at rotate"));
        index = 0;
        rotated[0] = stack->content[stack->top];
        while (index < stack->top)
        {
                rotated[index + 1] = stack->content[index];
                index++;
        }
        free(stack->content);
        stack->content = rotated;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rrr\n");
}
