/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:28:41 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/27 12:10:43 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "../lib/lib.h"

typedef struct	s_move
{
	int	atop;			// Top of stack a
	int	apin;			// Index of the best element to move in 'a'
	int	adir;			// Direction of the best element to move in 'a'
	int	acost;			// Cost to move the a pin element in place
	int	aval;
	int	btop;			// Top of stack b
	int	bpin;			// Index of the best element to move in 'b'
	int	bdir;			// Direction of the best element to move in 'b'
	int	bcost;			// Cost to move the b pin element in place
	int	bval;
	int	cost;			// Number of operation required to perform the move
}		t_move;

typedef struct	s_stack
{
	int	*content;
	int	pin;			// Index of currently examinated element
	int	top;			// Index of the first element of the stack
	int	direction;		// (Bool) Direction of the currently examinated element
}		t_stack;

typedef struct	s_package
{
	char    **data;
	int	size;
	t_move	*current;
	t_move	*best;
	t_stack	*a;
	t_stack	*b;
}		t_package;

// ------------------------------------------------------------- PACKAGE
t_package	*new_package(int arg_count, char **arg_list);
void		update_best(t_package *package);
void		delete_package(t_package *package, int arg_count);
// ------------------------------------------------------------- STACK
t_stack		*new_stack(int size);
void		delete_stack(t_stack *stack);
// ------------------------------------------------------------- MOVE
t_move		*new_move();
void		compare_moves(t_package *package);
void		clean_move(t_move *move);
void		delete_move(t_move *move);


#endif
