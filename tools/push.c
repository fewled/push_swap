/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 11:07:29 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:15:15 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	push(t_stack *from, t_stack *to)
{
	if (from->top == -1)
		return ;
	to->top++;
	to->content[to->top] = from->content[from->top];
	from->top--;
}
