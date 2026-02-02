/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2026/02/02 16:36:40 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"

typedef struct s_stack
{
	int		*content;
	int		top;
	int		pivot;
	int		capacity;
}			t_stack;

typedef struct s_package
{
	char	**data;
	int		size;
	t_stack	*a;
	t_stack	*b;
}			t_package;


t_package	*new_package(int arg_count, char **arg_list);
void		find_median(t_stack *stack);
void		clean(t_package *package);
void		clean_iter(char **list);

#endif

