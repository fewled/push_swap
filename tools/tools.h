/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/30 07:02:38 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"

typedef struct s_package
{
	int	*data;
	int	size;
	int	median;
	int	is_valid;
}		t_package;

typedef struct s_stack
{
	int	*content;
	int	top;
	int	capacity;
	int	pivot;
}		t_stack;

//			Constructors
t_package	*new_package(int arg_count, char **arg_list);
t_stack		*new_stack(t_package *package);
//			Tools
void		find_median(t_package *package);
void		sort(t_stack *a, t_stack *b, t_package *package);
//			Cleaners
void		clean_package(t_package *package);
void		clean_stack(t_stack *stack);

#endif
