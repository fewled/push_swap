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

void    get_closest(t_package *package);
/*
void    get_directions(t_package *package);
void	get_individual_cost(t_package *package);
void	get_compared_cost(t_package *package);
void	is_current_best(t_package *package);
void	apply_move(t_package *package);
*/

void    transfer(t_package *package)
{
    package->a->pin = package->a->top;
    get_closest(package);
    printf("[i] Closest : %d\n", package->current->bval);
    /*
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
    */
}
