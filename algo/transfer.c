/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:49:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/12 14:51:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"
#include <cstdio>

static void	get_closest(t_package *package)
{
	int		closest;
	t_stack *a;
	t_stack	*b;

	b->pin = b->top;
	closest = b->top;
	while (b->pin >= 0)
	{
		if (a->content[a->pin] > b->content[b->pin])
			if (ft_abs(a->content[a->pin] - b->content[b->pin]) < closest)
				closest = b->pin;
		if (a->content[a->pin] < b->content[b->pin])
			if (ft_abs(b->content[b->pin] - a->content[a->pin]) < closest)
				closest = b->pin;
		package->b->pin--;
	}
	b->pin = closest;
}

static void	get_directions(t_package *package)
{
	package->a->direction = 0;
	if (package->a->pin > (package->a->top / 2))
		package->a->direction = 1;
	package->b->direction = 0;
	if (package->b->pin > (package->b->top / 2))
		package->b->direction = 1;
}

static void get_costs(t_package *package)
{
	int	a_cost;
	int	b_cost;
	package->cost = 0;
	if (package->a->direction)
		a_cost = package->a->top - package->a->pin;
	else
		a_cost = package->a->pin + 1;
	if ()
}

void	transfer(t_package *package)
{
	int	closest;

    package->a->pin = package->a->top;
    while (package->a->pin >= 0)
    {
    	get_closest(package);
    	get_directions(package);
     	// Find moving cost
      	get_costs(package);
        package->a->pin--;
    }
    // Apply current move
}
