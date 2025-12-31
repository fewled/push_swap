/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/31 08:49:03 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"

int	main(int arg_count, char **arg_list)
{
	t_package	*package;

	if (arg_count == 1)
		return (1);
	if (arg_count < 3)
		return (ft_puterr("[x] Not enough args."), 1);
	package = new_package(arg_count, arg_list);
	if (!package)
	{
		ft_puterr("[x] ERROR");
		ft_puterr("[i] At least 2 numbers.");
		ft_puterr("[i] Each of type and size 'int'.");
		ft_puterr("[i] No duplicates.");
		return (1);
	}
	sort(package);
	clean(package);
}

