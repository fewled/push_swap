/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:57:58 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/26 12:38:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include "../types/types.h"
# include "../operations/operations.h"

void	sort(t_package *package);		// Main sorting function

void	transfer(t_package *package);
void	get_closest(t_package *package);
void	get_directions(t_package *package);
void	get_stacks_cost(t_move *move);
void	get_compared_cost(t_move *move);
void	adjust_cost(t_package *package);
void	update_best(t_package *package);

void	arrange(t_stack *stack);		// Sort the 3 remaining elements in 'a'
void	refill(t_package *package);		// Bring everyting back to 'a'
void	adjust(t_package *package);		// Bring the smallest element at the top of 'a'

#endif
