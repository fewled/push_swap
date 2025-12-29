/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:57:56 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 18:57:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	sa(t_stack *a)
{
	swap(a);
	ft_putstr("sa");
}

void	sb(t_stack *b)
{
	swap(b);
	ft_putstr("sb");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_putstr("ss");
}
