/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:15:40 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 17:31:31 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	swap(t_stack *instance)
{
	int	*content;
	int	top;
	int	temp;

	if (instance->top < 1)
		return (ft_puterr("[i] Not enough data to swap"));
	content = instance->content;
	top = instance->top;
	temp = content[top];
	content[top] = content[top - 1];
	content[top - 1] = temp;
}
