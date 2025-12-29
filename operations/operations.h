/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:31:59 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/29 18:40:43 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../tools/tools.h"

void	sa(t_stack *a);
void	sb(t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *b, t_stack *a);
void	pb(t_stack *a, t_stack *b);
void 	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
