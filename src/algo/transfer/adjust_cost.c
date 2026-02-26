/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:47:02 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 14:34:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../algo.h"

void	adjust_cost(t_package *package)
{
	if (package->a->content[package->current->apin]
		< package->b->content[package->current->bpin])
		package->current->cost++;
	package->current->cost++;
}
