/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_package.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:14:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	package;
	int			index;	

	if (arg_count < 3)
		return (0);
	package = malloc(sizeof(t_package));
	if (!package)
		return (0);
	package->data = malloc(sizeof(int) * arg_count - 1);
	if (!package->data)
		return (free_package(package), 0);
	arg_list++;
	index = 0;
	while (index < arg_count)
	{
		if (!ft_isnum(arg_list[index]))
			return (free_package(package), 0);
		if (!ft_isint(ft_atoll(arg_list[index])))
			return (free_package(package), 0);
		package->data[index] = ft_atoi(arg_list[index]);
		index++;
	}
	if (check_duplicate(arg_count, package->data))
		return (free_package(package), 0);
	return ((package->max = arg_count - 1), package);
}
