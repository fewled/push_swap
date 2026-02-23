/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:32:26 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 17:32:27 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

t_stack	*new_stack(int size)
{
	t_stack *new_stack;

	if (!(new_stack = malloc(sizeof(t_stack)))
		|| !(new_stack->content = malloc(sizeof(int) * size)))
		return ((t_stack *)0);
	new_stack->top = size - 1;
	new_stack->direction = 0;
	new_stack->pin = 0;
	return (new_stack);
}
