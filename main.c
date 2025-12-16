/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/16 12:55:28 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"

int	main(int arg_count, char **arg_list)
{
	t_stack	*a;
	t_stack	*b;

	a = new_stack(arg_count - 1);
	b = new_stack(arg_count - 1);
	if (!a || !b)
		return (0);
	a->list = get_stack(arg_count, arg_list);
	if (!a->list)
		return (0);
	a->top = arg_count - 2;
	b->list = malloc(sizeof(int) * (arg_count - 1));
	if (!b->list)
		return (0);
	b->top = 0;
	sort(a, b);
	free(a);
	free(b);
}
