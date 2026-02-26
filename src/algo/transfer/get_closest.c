/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_closest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:50:26 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 14:37:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	get_closest(t_package *package)
{
	int		closest;
	t_stack		*a;
	t_stack		*b;

	a = package->a;
	b = package->b;
	b->pin = b->top;
	closest = b->top;
	while (b->pin >= 0)
	{
		if (a->content[a->pin] > b->content[b->pin])
		{
			if (ft_abs(a->content[a->pin]
				- b->content[b->pin] < closest))
				closest = b->pin;
		}
		else
		{
			if (ft_abs(b->content[b->pin]
				- a->content[a->pin] < closest))
				closest = b->pin;
		}
		package->b->pin--;
	}
	package->current->bval = package->b->content[closest];
	package->current->bpin = closest;
}
