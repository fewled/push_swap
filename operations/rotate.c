/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:10:39 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:16:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	rotate(t_stack *stack)
{
	int	*rotated;
	int	index;

	if stack->top < 1
		return ;
	rotated = malloc(sizeof(int) * stack->capacity);
	if (!rotated)
		return (ft_puterr("[x] Failed allocation at rotate"));
	index = 0;
	rotated[stack->top] = stack->content[index++];
	while (index < instance->top)
	{
		rotated[index - 1] = stack->content[index];
		index++;
	}
	free(stack->content);
	stack->data = rotated;
}
