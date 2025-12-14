/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:01:34 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 20:18:34 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	*get_stack(int arg_count, char **arg_list)
{
	int index;
	int *list;

	list = malloc(sizeof(int) * (arg_count - 1));
	if (!list)
		return (ft_puterr("[x] Allocation failed at check_stack()"), NULL);
	if (arg_count < 3)
		return (ft_puterr("[x] Not enough argument(s)"), free(list), NULL);
	arg_list++;
	index = 0;
	while (index < (arg_count - 1))
	{
		if (!ft_isnum(arg_list[index]))
			return (ft_puterr("[x] Invalid argument(s) type"),
				free(list), NULL);
		if (!ft_isint(ft_atoi(arg_list[index])))
			return (ft_puterr("[x] Invalid argument(s) range"), 
				free(list), NULL);
		list[index] = ft_atoi(arg_list[index]);
		index++;
	}
	if (!check_duplicate(arg_count, list))
		return (ft_puterr("[x] Duplicate argument(s) found"),
			free(list), NULL);
	return (list);
}
