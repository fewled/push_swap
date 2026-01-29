/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/29 17:45:25 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"
#include "alerts/alerts.h"

int	main(int arg_count, char **arg_list)
{
	t_package	*package;

	if (arg_count < 2)
		return (missing_alert(), 1);
	package = new_package(arg_count, arg_list);
	if (!package)
		return (suggest_hints(), 1);
	// sort(package);
	clean(package);
}

