/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/09 20:20:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"
#include <stdio.h>			// TO REMOVE

typedef struct s_stack		// Check for unsused fields at some point
{
	int		*content;
	int		pin;
	int		top;
	int		best;
	int		near_top;
}			t_stack;

typedef struct s_package
{
	char	**data;
	int		size;
	t_stack	*a;
	t_stack	*b;
	// int	best ?
}			t_package;


t_package	*new_package(int arg_count, char **arg_list);
void		clean(t_package *package, int arg_count);
void		suggest_hints();

#endif
