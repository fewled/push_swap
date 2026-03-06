/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 11:31:56 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/27 11:38:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	status(t_package *package)
{
	int	index;

	ft_putstr("-----------------------------------------------------------\n");	
	ft_putstr("A | ");
	index = 0;
	while (index <= package->a->top)
	{
		ft_putnbr(package->a->content[index++]);
		ft_putstr(" ");
	}
	ft_putstr("\n");
	ft_putstr("-----------------------------------------------------------\n");	
	ft_putstr("B | ");
	index = 0;
	while (index <= package->b->top)
	{
		ft_putnbr(package->b->content[index++]);
		ft_putstr(" ");
	}
	ft_putstr("\n");
	ft_putstr("-----------------------------------------------------------\n");	
}
