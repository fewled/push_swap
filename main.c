/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:24:43 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types/types.h"
#include "tools/tools.h"
#include "algo/algo.h"

int	main(int arg_count, char **arg_list)
{
	t_package	*package;

	if (arg_count < 2)
		return (1);
	package = new_package(arg_count, arg_list);
	if (!package)
		return (suggest_hints(), 1);
	sort(package);
	destroy_package(package, arg_count);
}
