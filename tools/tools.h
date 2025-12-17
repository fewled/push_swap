/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:01 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/17 10:25:17 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include "../lib/lib.h"

typedef struct s_stack
{
	int	*data;
	int	top;
}		t_stack;

t_stack	*new_stack(int size);
int		load_args(t_stack *instance, int arg_count, char **arg_list);
int		check_duplicate(int len, int *list);
void	sort(t_stack *a, t_stack *b, int size);
void	free_stack(t_stack *instance);

#endif
