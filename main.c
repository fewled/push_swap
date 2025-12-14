/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:48 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 19:59:32 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/lib.h"
#include "tools/tools.h"
#include "operations/operations.h"

int	main(int arg_count, char **arg_list)
{
	int	*stack;

	stack = get_stack(arg_count, arg_list);
	if (!stack)
		return (1);
	free(stack);
}
