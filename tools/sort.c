/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:34:47 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 10:09:44 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "../operations/operations.h"

static void	display(t_stack *stack)
{
	int	index;

	index = 0;
	ft_putstr("[>] ");
	while (index <= stack->top)
	{
		ft_putnbr(stack->content[index++]);
		ft_putstr(" ");
	}
	ft_putstr("\n");
}

static void	shrink(t_stack *a, t_stack *b)
{
	int	push_count;
	int	index;

	push_count = 1;
	while (push_count && a->top > 2)
	{
		push_count = 0;
		index = 0;
		find_median(a);
		while (index <= a->top)
		{
			if (a->content[a->top] > a->pivot)
			{
				pb(a, b);
				push_count++;
			}
			else
				ra(a);
			index++;
		}
	}
}

void	sort(t_stack *a, t_stack *b, t_package *package)
{
	(void)package;
	display(a);
	display(b);
	shrink(a, b);
	display(a);
	display(b);
}
