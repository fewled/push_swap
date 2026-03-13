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

#include "lib/lib.h"
#include "types/types.h"
#include "operations/operations.h"
#include "algo/algo.h"

int	is_sorted(t_package *package)
{
	int	index;

	if (package->a->btm > 0)
	{
		index = 1;
		while (index <= package->a->btm)
		{
			if (package->a->content[index - 1] > package->a->content[index])
				return (0);
			index++;
		}
	}
	return (1);
}

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
	if (!package || !package->status || is_sorted(package))
	{
		if (!package->status)
			write(2, "Error.\n", 7);
		return (delete_package(package, arg_count), 0);
	}
	if (package->a->btm == 1)
		mini_sort(package);
	else
		sort(package);
	delete_package(package, arg_count);
}
