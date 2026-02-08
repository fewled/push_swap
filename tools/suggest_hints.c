/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suggest_hints.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:35:47 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 17:56:16 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	suggest_hints()
{
	ft_puterr("");
	ft_puterr("----------------------------------");
	ft_puterr("[x] Error while parsing arguments.");
	ft_puterr("----------------------------------");
	ft_puterr("[i] At least 2 numbers are needed.");
	ft_puterr("[i] Each one should fit in an int.");
	ft_puterr("[i] No duplicate argument allowed.");
	ft_puterr("");
}
