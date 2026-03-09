/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 13:04:16 by vpolard           #+#    #+#             */
/*   Updated: 2026/03/09 12:04:19 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"

void	arrange(t_package *package)
{
	int	*s;

	s = package->a->content;
	if (s[0] > s[1] && s[1] < s[2] && s[0] < s[2])
		sa(package);
	else if (s[0] > s[1] && s[1] > s[2] && s[0] > s[2])
	{
		sa(package);
		rra(package);
	}
	else if (s[0] > s[1] && s[1] < s[2] && s[0] > s[2])
		ra(package);
	else if (s[0] < s[1] && s[1] > s[2] && s[0] < s[2])
	{
		sa(package);
		ra(package);
	}
	else if (s[0] < s[1] && s[1] > s[2] && s[0] > s[2])
		rra(package);
}
