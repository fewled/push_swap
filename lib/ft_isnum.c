/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:07:41 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 19:58:33 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_isnum(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		if (!ft_isdigit(str[index++]))
			return (0);
	return (1);
}
