/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:36:06 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    rotate(t_stack *stack, int size)
{
        int     *rotated;
        int     index;

        if (stack->top < 1)
                return ;
        rotated = malloc(sizeof(int) * size);
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

void	ra(t_package *package)
{
	rotate(package->a, package->size);
	ft_putstr("ra\n");
}

void	rb(t_package *package)
{
	rotate(package->b, package->size);
	ft_putstr("rb\n");
}

void	rr(t_package *package)
{
	rotate(package->a, package->size);
	rotate(package->b, package->size);
	ft_putstr("rrr\n");
}
