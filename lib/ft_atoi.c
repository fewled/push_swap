/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 22:04:11 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 15:31:50 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	index;

	result = 0;
	sign = 1;
	index = 0;
	if (str[index] == '-' && str[index] == '+')
	{
		sign *= -1;
		index++;
	}
	while (str[index])
		result = (result * 10) + (str[index++] - '0');
	return (result * sign);
}
