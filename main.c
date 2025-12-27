/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 18:57:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"
#include <stdio.h>

int	main(int arg_count, char **arg_list)
{
	t_package	*package;
	t_stack		*a;
	t_stack		*b;

	package = new_package(arg_count, arg_list);
	a = new_stack(package);
	b = new_stack(package);
	if (!package || !a || !b)
	{
		ft_puterr("[x] Error, check for :");
		ft_puterr("[>] At least 2 numbers to sort.");
		ft_puterr("[>] Each argument is of type and size 'int'.");
		ft_puterr("[>] No duplicates.");
		return (1);
	}
	clean_package(package);
	// sort(a, b);
	clean_stack(a);
	clean_stack(b);
}
