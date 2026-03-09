/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refill.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 15:48:10 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 10:39:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void refill(t_package *package)
{
    int value;
    int index;
    int next_value;

    while (package->b->btm >= 0)
    {
        value = package->b->content[0];
        index = 0;
        while (index <= package->a->btm)
        {
            if (index == package->a->btm)
                next_value = package->a->content[0];
            else
                next_value = package->a->content[index + 1];
            if ((package->a->content[index] < value && value < next_value)
                || (package->a->content[index] > next_value 
                    && (value > package->a->content[index] || value < next_value)))
                break;
            index++;
        }
        while (package->a->content[0] != next_value)
            ra(package);
        pa(package);
    }
}
