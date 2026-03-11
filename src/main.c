/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/11 11:13:11 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types/types.h"
#include "operations/operations.h"
#include "algo/algo.h"

void	mini_sort(t_package *package)
{
	if (package->a->content[0] > package->a->content[1])
		sa(package);
}

int	main(int arg_count, char **arg_list)
{
	t_package	*package;

	if (arg_count < 2)
		return (1);
	package = new_package(arg_count, arg_list);
	if (!package)
		return (delete_package(package, arg_count), 0);
	if (package->a->btm == 1)
		mini_sort(package);
	else
		sort(package);
	delete_package(package, arg_count);
}
