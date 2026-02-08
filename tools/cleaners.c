/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:44:20 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/08 18:25:13 by vpolard          ###   ########.fr       */
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

void    clean(t_package *package, int arg_count)
{
	int	index;

	if (package->a)
		clean_stack(package->a);
	if (package->b)
		clean_stack(package->b);
	if (arg_count == 2)
	{
		index = 0;
		while (package->data[index])
			free(package->data[index++]);
		free(package->data);
	}
	if (package)
		free(package);
}
