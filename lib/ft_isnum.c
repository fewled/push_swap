/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:07:41 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 18:58:59 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_isnum(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '-' && str[index] == '+'
		&& ft_strlen(str) > 1)
		index++;
	while (str[index])
		if (!ft_isdigit(str[index++]))
			return (0);
	return (1);
}
