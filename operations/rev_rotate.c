/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:35:05 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void    rev_rotate(t_stack *stack, int size)
{
	int     *rotated;
	int     index;

	if (stack->top < 1)
		return ;
	rotated = malloc(sizeof(int) * size);
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

void	rra(t_package *package)
{
	rev_rotate(package->a, package->size);
	ft_putstr("rra\n");
}

void	rrb(t_package *package)
{
	rev_rotate(package->b, package->size);
	ft_putstr("rrb\n");
}

void	rrr(t_package *package)
{
	rev_rotate(package->a, package->size);
	rev_rotate(package->b, package->size);
	ft_putstr("rrr\n");
}
