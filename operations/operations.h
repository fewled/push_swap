/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 08:13:56 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:17:58 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../tools/tools.h"

void	push(t_stack *from, t_stack *to);
void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	rev_rotate(t_stack *stack);

#endif
