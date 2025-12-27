/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:38:45 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 17:34:09 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	wipe(t_stack *instance)
{
	if (instance->contet)
		free(instance->content);
	if (instance)
		free(instance);
}
