/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:22 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/08 17:28:07 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	adjust_from(t_stack *stack, int size)
{
	int	*new_content;
	int	index;

	if (stack->btm <= 0)
		return ;
	new_content = malloc(sizeof(int) * size);
	if (!new_content)
		return (ft_puterr("[x] Failed allocation at push."));
	index = 0;
	stack->btm--;
	while (index <= stack->btm)
	{
		new_content[index] = stack->content[index + 1];
		index++;
	}
	free(stack->content);
	stack->content = new_content;
}

static void	push(t_stack *from, t_stack *to, int size)
{
	int	*new_content;
	int	index;

	if (from->btm <= 0)
		return ;
	new_content = malloc(sizeof(int) * size);
	if (!new_content)
		return (ft_puterr("[x] Failed allocation at push."));
	new_content[0] = from->content[0];
	adjust_from(from, size);
	index = 1;
	to->btm++;
	while (index <= to->btm)
	{
		new_content[index] = to->content[index - 1];
		index++;
	}
	free(to->content);
	to->content = new_content;
}

void	pa(t_package *package)
{
	push(package->b, package->a, package->size);
	ft_putstr("pa\n");
}

void	pb(t_package *package)
{
	push(package->a, package->b, package->size);
	ft_putstr("pb\n");
}
