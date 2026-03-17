/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/17 10:14:53 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static int	rev_rotate(t_stack *stack, int size)
{
	int	*new_content;
	int	index;

	if (stack->btm > 0)
	{
		new_content = malloc(sizeof(int) * size);
		if (!new_content)
			return (0);
		new_content[0] = stack->content[stack->btm];
		index = 1;
		while (index <= stack->btm)
		{
			new_content[index] = stack->content[index - 1];
			index++;
		}
		free(stack->content);
		stack->content = new_content;
	}
	return (1);
}

void	rra(t_package *package)
{
	if (!rev_rotate(package->a, package->size))
		return (delete_package(package, package->argc));
	ft_putstr("rra\n");
}

void	rrb(t_package *package)
{
	if (!rev_rotate(package->b, package->size))
		return (delete_package(package, package->argc));
	ft_putstr("rrb\n");
}

void	rrr(t_package *package)
{
	rev_rotate(package->a, package->size);
	rev_rotate(package->b, package->size);
	ft_putstr("rrr\n");
}
