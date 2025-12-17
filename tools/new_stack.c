/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:21:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 08:52:20 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_stack	*new_stack(int size)
{
	t_stack	*instance;

	instance = malloc(sizeof(t_stack));
	if (!instance)
		return (NULL);
	instance->data = malloc(sizeof(int) * size);
	if (!instance->data)
		return (free(instance), NULL);
	instance->top = 0;
	instance->capacity = size;
	return (instance);
}
