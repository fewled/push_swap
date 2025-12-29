/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:15:40 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:17:21 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	swap(t_stack *stack)
{
	int	*content;
	int	top;
	int	temp;

	if (stack->top < 1)
		return ;
	content = stack->content;
	top = stack->top;
	temp = content[top];
	content[top] = content[top - 1];
	content[top - 1] = temp;
}
