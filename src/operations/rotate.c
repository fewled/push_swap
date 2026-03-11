/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:06 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:27:45 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static int	rotate(t_stack *stack, int size)
{
	int	*new_content;
	int	index;
	int	first;

	if (stack->btm <= 0)
		return (1);
	new_content = malloc(sizeof(int) * size);
	if (!new_content)
		return (ft_puterr("[x] Failed allocation at rotate."), 0);
	first = stack->content[0];
	index = 1;
	while (index <= stack->btm)
	{
		new_content[index - 1] = stack->content[index];
		index++;
	}
	new_content[stack->btm] = first;
	free(stack->content);
	stack->content = new_content;
	return (1);
}

void	ra(t_package *package)
{
	if (!rotate(package->a, package->size))
		return (delete_package(package, package->argc));
	ft_putstr("ra\n");
}

void	rb(t_package *package)
{
	if (!rotate(package->b, package->size))
		return (delete_package(package, package->argc));
	ft_putstr("rb\n");
}

void	rr(t_package *package)
{
	rotate(package->a, package->size);
	rotate(package->b, package->size);
	ft_putstr("rrr\n");
}
