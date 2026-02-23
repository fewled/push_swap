/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:28:41 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/23 17:28:43 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "../lib/lib.h"
#include <stdio.h>			// [!] TO REMOVE

typedef struct	s_move
{
	int	apin;				// Index of the best element to move in 'a'
	int	adir;				// Direction of the best element to move in 'a'
	int	bpin;				// Index of the best element to move in 'b'
	int	bdir;				// Direction of the best element to move in 'b'
	int	cost;				// Number of operation required to perform the move
}		t_move;

typedef struct	s_stack
{
	int		*content;
	int		pin;			// Index of currently examinated element
	int		top;			// Index of the first element of the stack
	int		direction;		// (Bool) Direction of the currently examinated element
}			t_stack;

typedef struct	s_package
{
	char	**data;
	int		size;
	t_move	*current_move;
	t_move	*best_move;
	t_stack	*a;
	t_stack	*b;
}			t_package;

// ------------------------------------------------------------- PACKAGE
t_package	*new_package(int arg_count, char **arg_list);
void		destroy_package(t_package *package, int arg_count);
// ------------------------------------------------------------- STACK
t_stack		*new_stack(int size);
void		destroy_stack(t_stack *stack);
// ------------------------------------------------------------- MOVE
t_move		*new_move();
void		clean_move(t_move *move);
void		destroy_move(t_move *move);


#endif
