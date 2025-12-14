/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:06:56 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 22:00:57 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

long long	ft_atoll(char *str)
{
	long long	result;
	int			sign;
	int			index;

	index = 0;
	result = 0;
	sign = 0;
	if (str[index] == '-')
	{
		sign++;
		index++;
	}
	while (str[index])
		result = (result * 10) + (str[index++] - '0');
	if (sign)
		return (-result);
	return (result);
}
