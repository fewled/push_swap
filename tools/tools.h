/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/12 14:48:52 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"
#include <stdio.h>			// [!] TO REMOVE

typedef struct	s_move
{
	int	id;					// Wether same_dir, smart_dir, opp_dir
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
	t_move	move;
	t_stack	*a;
	t_stack	*b;
}			t_package;


t_package	*new_package(int arg_count, char **arg_list);
void		clean(t_package *package, int arg_count);
void		suggest_hints();

#endif
