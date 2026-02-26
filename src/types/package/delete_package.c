/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_package.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:57:20 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 17:57:21 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	delete_package(t_package *package, int arg_count)
{
	int	index;
	if (package->current_move)
		delete_move(package->current_move);
	if (package->best_move)
		delete_move(package->best_move);
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
}
