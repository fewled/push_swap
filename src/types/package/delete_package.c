/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_package.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:57:20 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 14:58:39 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	delete_package(t_package *package, int arg_count)
{
	int	index;
	if (package->current)
		delete_move(package->current);
	if (package->best)
		delete_move(package->best);
	if (package->a)
		delete_stack(package->a);
	if (package->b)
		delete_stack(package->b);
	if (arg_count == 2)
	{
		index = 0;
		while (package->data[index])
			free(package->data[index++]);
		free(package->data);
	}
	free(package);
}
