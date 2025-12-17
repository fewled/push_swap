/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 10:15:40 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 10:26:04 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	swap(t_stack *instance)
{
	int	*data;
	int	top;
	int	temp;

	if (instance->top < 1)
		return (ft_puterr("[i] Not enough data to swap"));
	data = instance->data;
	top = instance->top;
	temp = data[top];
	data[top] = data[top - 1];
	data[top - 1] = temp;
}
