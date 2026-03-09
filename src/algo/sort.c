/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:52:48 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 10:40:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	sort(t_package *package)
{
    inject(package);
	transfer(package);
	arrange(package);
	refill(package);
	// adjust(package);
	// status(package);
}
