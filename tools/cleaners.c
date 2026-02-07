/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:44:20 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/29 17:45:00 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static void    clean_stack(t_stack *stack)
{
	if (stack->content)
		free(stack->content);
	if (stack)
		free(stack);
}

void    clean(t_package *package)
{
	if (package->a)
		clean_stack(package->a);
	if (package->b)
		clean_stack(package->b);
	if (package)
		free(package);
}
