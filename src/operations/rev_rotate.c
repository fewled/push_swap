/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 16:25:58 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rev_rotate(t_stack *stack, int size)
{
	int	*new_content;
	int	last;
	int	index;

	if (stack->btm <= 0)
		return ;
	new_content = malloc(sizeof(int) * size);
	if (!new_content)
		return (ft_puterr("[x] Failed allocation at rev_rotate."));
	last = stack->content[stack->btm];
	index = 1;
	new_content[0] = last;
	while (index <= stack->btm)
	{
		new_content[index] = stack->content[index - 1];
		index++;
	}
	free(stack->content);
	stack->content = new_content;
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
