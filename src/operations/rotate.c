/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 16:24:33 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rotate(t_stack *stack, int size)
{
	int	*new_content;
	int	index;
	int	first;

	if (stack->btm <= 0)
		return ;
	new_content = malloc(sizeof(int) * size);
	if (!new_content)
		return (ft_puterr("[x] Failed allocation at rotate."));
	first = stack->content[0];
	index = 0;
	while (index <= stack->btm)
	{
		new_content[index] = stack->content[index + 1];
		index++;
	}
	new_content[stack->btm] = first;
	free(stack->content);
	stack->content = new_content;
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
