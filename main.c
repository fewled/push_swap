/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 15:30:55 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"

int	main(int arg_count, char **arg_list)
{
	t_package	*package;
	t_stack		*a;
	t_stack		*b;

	if (arg_count < 3)
		return (ft_puterr("[x] Not enough args."), 1);
	package = new_package(arg_count, arg_list);
	a = new_stack(package);
	b = new_stack(package);
	if (!package || !a || !b)
	{
		ft_puterr("[x] ERROR");
		ft_puterr("[i] At least 2 numbers.");
		ft_puterr("[i] Each of type and size 'int'.");
		ft_puterr("[i] No duplicates.");
		return (1);
	}
	// sort(a, b, package);
	clean_package(package);
	clean_stack(a);
	clean_stack(b);
}

