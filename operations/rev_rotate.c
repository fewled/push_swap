/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:17:08 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/28 14:17:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	rev_rotate(t_stack *stack)
{
		int	*rotated;
		int	index;

		if (stack->top < 1)
			return ;
		rotated = malloc(sizeof(int) * stack->capacity);
		if (!rotated)
			return (ft_puterr("[x] Failed allocation at rev_rotate."));
		index = 0;
		rotated[index++] = stack->content[stack->top];
		while (index < stack->top)
		{
			rotated[index] = stack->content[index - 1];
			index++;
		}
		free(stack->content);
		stack->content = rotated;
}
