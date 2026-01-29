/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suggest_hints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:35:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/29 17:47:21 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alerts.h"

void	suggest_hints()
{
	ft_putstr("\n");
	ft_putstr("----------------------------------\n");
	ft_putstr("[x] Error while parsing arguments.\n");
	ft_putstr("----------------------------------\n");
	ft_putstr("[i] At least 2 numbers are needed.\n");
	ft_putstr("[i] Each one should fit in an int.\n");
	ft_putstr("[i] No duplicate argument allowed.\n");
	ft_putstr("\n");
}
