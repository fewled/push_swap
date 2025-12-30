/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 07:35:31 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    rev_rotate(t_stack *stack)
{
	int     *rotated;
	int     index;

	if (stack->top < 1)
		return ;
	rotated = malloc(sizeof(int) * stack->capacity);
	if (!rotated)
		return (ft_puterr("[x] Failed allocation at rev_rotate."));
	index = 0;
	rotated[stack->top] = stack->content[index++];
	while (index <= stack->top)
	{
		rotated[index - 1] = stack->content[index];
		index++;
	}
	free(stack->content);
	stack->content = rotated;
}

void	rra(t_stack *a)
{
	rev_rotate(a);
	ft_putstr("rra\n");
}

void	rrb(t_stack *b)
{
	rev_rotate(b);
	ft_putstr("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putstr("rrr\n");
}
