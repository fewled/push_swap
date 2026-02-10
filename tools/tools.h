/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/10 09:48:07 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"
#include <stdio.h>			// TO REMOVE

typedef struct s_stack		// Check for unsused fields at some point
{
	int		*content;
	int		pin;			// Index of currently examinated element
	int		top;			// Index of the first element of the stack
	int		best;			// Index of the best element found
	int		direction;		// (Bool) Direction of the currently examinated element
}			t_stack;

typedef struct s_package
{
	char	**data;
	int		size;
	int		cost;
	t_stack	*a;
	t_stack	*b;
}			t_package;


t_package	*new_package(int arg_count, char **arg_list);
void		clean(t_package *package, int arg_count);
void		suggest_hints();

#endif
