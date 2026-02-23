/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:40:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 17:40:16 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types.h"

void	destroy_stack(t_stack *stack)
{
	if (stack->content)
		free(stack->content);
	free(stack);
}
