/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:57:58 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/10 10:42:47 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

# include "../tools/tools.h"
# include "../operations/operations.h"

void	sort(t_package *package);		// Main sorting function
void	unload(t_package *package);		// Documentation inside source file
void	find_cost(t_package *package);	// Documentation inside source file
void	arrange(t_stack *stack);		// Sort the 3 remaining elements in 'a'
void	refill(t_package *package);		// Bring everyting back to 'a'

#endif
