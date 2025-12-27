/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 13:10:39 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 17:29:27 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	rotate(t_stack *instance)
{
	int	*rotated;
	int	index;

	if instance->top < 1
		return ;
	rotated = malloc(sizeof(int) * instance->capacity);
	if (!rotated)
		return (ft_puterr("[x] Failed allocation at rotate"));
	index = 0;
	rotated[instance->top] = instance->content[index++];
	while (index < instance->top)
	{
		rotated[index - 1] = instance->content[index];
		index++;
	}
	free(instance->content);
	instance->data = rotated;
}
