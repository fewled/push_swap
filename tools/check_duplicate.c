/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:24:38 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 19:53:44 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_duplicate(int	len, int *list)
{
	int	index;
	int	ping;

	ping = 0;
	while (ping < len)
	{
		index = ping + 1;
		while (index < len)
		{
			if (list[ping] == list[index])
				return (0);
			index++;
		}
		ping++;
	}
	return (1);
}
