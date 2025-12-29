/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:10:39 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 13:41:11 by vpolard          ###   ########.fr       */
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
	rotated[0] = stack->content[stack->top];
	while (index < stack->top)
	{
		rotated[index + 1] = stack->content[index];
		index++;
	}
	free(stack->content);
	stack->content = rotated;
}
