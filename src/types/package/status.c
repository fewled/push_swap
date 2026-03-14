/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 11:40:21 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/14 11:44:10 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	status(t_package *package)
{
	int	index;

	ft_putstr("-----------------------------------------------------------\n");
	ft_putstr("A : ");
	index = 0;
	while (index <= package->a->btm)
	{
		ft_putnbr(package->a->content[index++]);
		ft_putstr(" ");
	}
	ft_putstr("\n");
	ft_putstr("-----------------------------------------------------------\n");
	ft_putstr("B : ");
	index = 0;
	while (index <= package->b->btm)
	{
		ft_putnbr(package->a->content[index++]);
		ft_putstr(" ");
	}
	ft_putstr("\n");
	ft_putstr("-----------------------------------------------------------\n");
}
