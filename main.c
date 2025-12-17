/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 09:48:24 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools/tools.h"
#include <stdio.h>

int	main(int arg_count, char **arg_list)
{
	t_stack *a;
	t_stack	*b;
	int		size;

	size = arg_count - 1;
	a = new_stack(size);
	if (!a)
		return (ft_puterr("[x] Failed to allocate [a]"), 1);
	if (!load_args(a, size, arg_list))
		return (ft_puterr("[x] Failed to load args"), 1);
	b = new_stack(size);
	if (!b)
		return (ft_puterr("[x] Failed to allocate [b]"), free_stack(b), 1);
	free_stack(a);
	free_stack(b);
	return (0);
}
