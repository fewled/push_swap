/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:34:47 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 07:37:41 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "../operations/operations.h"

void	display(t_stack *stack)
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

void	sort(t_stack *a, t_stack *b, t_package *package)
{
	(void)package;
	display(a);
	display(b);
	sa(a);
	pb(a, b);
	display(a);
	display(b);
}
