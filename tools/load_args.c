/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:01:34 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 09:33:43 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	load_args(t_stack *instance, int arg_count, char **arg_list)
{
	int	index;

	index = 0;
	if (arg_count < 2)
		return (ft_puterr("[x] Not enough argument(s)"),
			free_stack(instance), 0);
	arg_list++;
	index = 0;
	while (index < arg_count)
	{
		if (!ft_isnum(arg_list[index]))
			return (ft_puterr("[x] Invalid argument(s) type"),
				free_stack(instance), 0);
		if (!ft_isint(ft_atoll(arg_list[index])))
			return (ft_puterr("[x] Invalid argument(s) range"),
				free_stack(instance), 0);
		instance->data[index] = ft_atoi(arg_list[index]);
		index++;
	}
	if (check_duplicate(arg_count, instance->data))
		return (ft_puterr("[x] Duplicate argument(s) found"),
			free_stack(instance), 0);
	instance->top = arg_count - 1;
	return (1);
}
