/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_package.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 18:22:35 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/27 18:24:50 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clean_package(t_package package)
{
	if (package->data)
		free(package->data);
	if (package)
		free(package);
}
