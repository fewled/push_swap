/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:44:20 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 15:44:44 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void    clean_package(t_package *package)
{
        if (package->data)
                free(package->data);
        if (package)
                free(package);
}

void    clean_stack(t_stack *stack)
{
        if (stack->content)
                free(stack->content);
        if (stack)
                free(stack);
}
