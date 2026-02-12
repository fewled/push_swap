/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:34:25 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/12 14:34:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void     adjust(t_package *package);
// (i) Ensures that the package->a->content[package->a->top] is the smallest element in the stack
// 1. Get the current index of the smallest element
// 2. Get its direction (if its closer to the top or the bottom of the stack)
// 3. Use the least amount of moves to place it at the top of the stack
{
        int     min;
        int     index;

        index = package->a->top;
        min = package->a->content[index];
        while (index >= 0)
        {
                if (package->a->content[index] < min)
                        min = package->a->content[index];
                index--;
        }
        while (package->a->content[index] != min)
                index++;
        if (index > (package->a->top / 2))
                while (package->a->content[package->a->top] != min)
                        ra(package);
        else
                while (package->a->content[package->a->top] != min)
                        rra(package);
}
