/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 19:03:32 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"

typedef struct s_package
{
	int	*data;
	int	max;
}		t_package;

typedef struct s_stack
{
	int	*content;
	int	top;
	int	capacity;
}		t_stack;

// Constructors
t_package	*new_package(int arg_count, char **arg_list);
t_stack		*new_stack(int size);
// Helpers
int			check_duplicate(int len, int *list);
// Cleaners
void		clean_package(t_package package);
void		clean_stack(t_stack stack);

#endif
