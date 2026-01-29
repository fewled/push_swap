/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/29 17:32:24 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	parse_arguments(t_package *package)
{
	// 1. Handle the use of the ARG variable
	// 2. Handle the use of multiple numbers as parameter
	(void)package;
	return (0);
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	if (!(package = malloc(sizeof(t_package))))
		return ((t_package *)0);
	package->size = arg_count - 1;
	package->data = (arg_list + 1);
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	if (!(package->a = malloc(sizeof(t_stack))) 
			|| !(package->b = malloc(sizeof(t_stack)))
			|| !parse_arguments(package))
		return (clean(package), (t_package *)0);
	return (package);
}
