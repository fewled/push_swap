/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 12:11:11 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 10:09:15 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

static int	*copy(int *list, int size)
{
	int index;
	int	*box;

	box = malloc(sizeof(int) * size);
	if (!box)
		return ((int *)0);
	index = 0;
	while (index < size)
	{
		box[index] = list[index];
		index++;
	}
	return (box);
}

static void	bubble_sort(int *list, int size)
{
	int	index;
	int	temp;
	int	swap_count;

	swap_count = 1;
	while (swap_count)
	{
		swap_count = 0;
		index = 0;
		while (index < size - 1)
		{
			if (list[index] > list[index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
				swap_count++;
			}
			index++;
		}
	}
}

void	find_median(t_stack *stack)
{
	int	*list;

	list = copy(stack->content, stack->top + 1);
	if (!list)
		return ; 
	bubble_sort(list, (stack->top + 1));
	stack->pivot = list[(stack->top + 1) / 2];
	free(list);
}
