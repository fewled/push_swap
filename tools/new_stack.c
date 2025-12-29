/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:21:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 15:14:40 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_stack	*new_stack(t_package *package)
{
	t_stack	*stack;

	if (!package)
		return ((t_stack *)0);
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ((t_stack *)0);
	if (package->data)
	{
		stack->content = package->data;
		stack->top = package->size - 1;
		package->data = (int *)0;
	}
	else
	{
		stack->content = malloc(sizeof(int) * package->size);
		if (!stack->content)
			return (free(stack), (t_stack *)0);
		stack->top = -1;
	}
	stack->capacity = package->size;
	return (stack);
}
