/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inject.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 09:27:18 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/28 09:27:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void    inject(t_package *package)
{
	printf("[i] Starting injection...\n");

    if (package->a->top >= 3)
        pb(package);
    if (package->a->top >= 4)
        pb(package);

    status(package);
    printf("[+] Injection done.\n");
}
