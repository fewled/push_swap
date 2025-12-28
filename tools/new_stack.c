/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:21:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 17:33:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_stack	*new_stack(t_package package)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	if (package->data)
	{
		stack->content = package->data;
		stack->top = package->max;
		package->data = 0;
	}
	else
	{
		stack->content = malloc(sizeof(int) * package->max);
		if (!stack->content)
			return (free(stack), 0);
		stack->top = -1;
	}
	instance->capacity = package->max;
	return (instance);
}
