/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 16:28:29 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/06 16:28:30 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void    final(t_package *package)
{
    int index;

    index = 0;
    while (index <= package->a->btm)
    {
        ft_putnbr(package->a->content[index++]);
        ft_putstr(" ");
    }
    ft_putstr("\n");
}
