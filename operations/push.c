/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:07:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 17:30:03 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	push(t_stack *from, t_stack *to)
{
	if (from->top == -1)
		return (ft_puterr("[i] Not enough content to push"));
	to->top++;
	to->content[to->top] = from->content[from->top];
	from->top--;
}
