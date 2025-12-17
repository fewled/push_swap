/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:07:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 11:07:31 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	push(t_stack *from, t_stack *to)
{
	if (from->top == -1)
		return (ft_puterr("[i] Not enough data to push"));
	to->top++;
	to->data[to->top] = from->data[from->top];
	from->top--;
}
