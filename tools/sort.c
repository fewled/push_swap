/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:34:47 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 16:24:07 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "tools.h"
#include "../operations/operations.h"

void	display(t_stack *stack)
{
	int	index;

	index = 0;
	printf("[>] ");
	while (index <= stack->top)
		printf("%d ", stack->content[index++]);
	printf("\n");
}

void	divide(t_stack *a, t_stack *b, t_package *package)
{
	int	index;

	index = 0;
	while (index < package->size)
	{
		if (a->content[a->top] > package->median)
			push(a, b);
		else
			rotate(a);
		index++;
	}
}

void	sort(t_stack *a, t_stack *b, t_package *package)
{
	printf("[i] Median : %d\n", package->median);
	divide(a, b, package);
}
