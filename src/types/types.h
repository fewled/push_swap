/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:28:41 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 11:35:28 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "../lib/lib.h"

typedef struct s_move
{
	int	abtm;
	int	apin;
	int	adir;
	int	acost;
	int	aval;
	int	bbtm;
	int	bpin;
	int	bdir;
	int	bcost;
	int	bval;
	int	cost;
}		t_move;

typedef struct s_stack
{
	int	*content;
	int	pin;
	int	btm;
	int	direction;
}		t_stack;

typedef struct s_package
{
	char	**data;
	int		size;
	t_move	*current;
	t_move	*best;
	t_stack	*a;
	t_stack	*b;
}		t_package;

t_package	*new_package(int arg_count, char **arg_list);
void		update_best(t_package *package);
void		delete_package(t_package *package, int arg_count);
t_stack		*new_stack(int size);
void		delete_stack(t_stack *stack);
t_move		*new_move(void);
void		compare_moves(t_package *package);
void		clean_move(t_move *move);
void		delete_move(t_move *move);

#endif
