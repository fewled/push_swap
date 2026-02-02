/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:02:31 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/02 14:35:56 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	parse_string(t_package *package)
{
}

static int	parse_list(t_package *package)
{
}

static int	setup_stacks(t_package *package)
{
	package->a = (t_stack *)0;
	package->b = (t_stack *)0;
	if (!(package->a = malloc(sizeof(t_stack)))
		|| !(package->b = malloc(sizeof(t_stack))))
		return (0);
	// To complete
}

t_package	*new_package(int arg_count, char **arg_list)
{
	t_package	*package;

	if (!(package = malloc(sizeof(t_package))))
		return ((t_package *)0);
	package->size = arg_count - 1;
	package->data = &(arg_list + 1);

	// At this point check for argument length and format
	// Allocate stacks accordingly
	
	return (package);
}
