/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 09:46:44 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/28 09:46:45 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void    get_closest(t_package *package)
{
	int	closest;
	int	min_diff;
	int	current_diff;
	int	index;

	closest = package->b->top;
	min_diff = ft_abs(package->b->content[closest]
		- package->a->content[package->a->pin]);
	index = package->b->top;
	while (index >= 0)
	{
		current_diff = ft_abs(package->b->content[index]
			- package->a->content[package->a->pin]);
		if (current_diff < min_diff)
		{
			min_diff = current_diff;
			closest = index;
		}
		index--;
	}
	package->b->pin = closest;
}

void    get_directions(t_package *package);
void	get_individual_cost(t_package *package);
void	get_compared_cost(t_package *package);
void	is_current_best(t_package *package);
void	apply_move(t_package *package);

void    transfer(t_package *package)
{
    while (package->a->top > 2)
    {
        package->a->pin = package->a->top;
        while (package->a->pin >= 0)
        {
        	get_closest(package);
            get_directions(package);
            get_individual_cost(package);
            get_compared_cost(package);
            is_current_best(package);
            package->a->pin--;
        }
        apply_move(package);
    }
}
