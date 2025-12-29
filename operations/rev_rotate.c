/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:58:16 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 18:58:17 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rra(t_stack *a)
{
	rev_rotate(a);
	ft_putstr("rra");
}

void	rrb(t_stack *b)
{
	rev_rotate(b);
	ft_putstr("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putstr("rrr");
}
