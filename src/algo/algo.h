/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 12:09:11 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:14:35 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H
# define ALGO_H

void	sort(t_package *package);
void	inject(t_package *package);
void	transfer(t_package *package);
void	arrange(t_package *package);
void	refill(t_package *package);
void	adjust(t_package *package);
void	apply_move(t_package *package);
int		is_compatible(t_move *move);

#endif
