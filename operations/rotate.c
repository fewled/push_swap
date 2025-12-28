/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:10:39 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/28 14:34:17 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rotate(t_stack *stack)
{
	int	*rotated;
	int	index;

	if (stack->top < 1)
		return ;
	rotated = malloc(sizeof(int) * stack->capacity);
	if (!rotated)
		return (ft_puterr("[x] Failed allocation at rotate"));
	index = 0;
	rotated[index++] = stack->content[stack->top];
	while (index <= stack->top)
	{
		rotated[index] = stack->content[index - 1];
		index++;
	}
	free(stack->content);
	stack->content = rotated;
}
