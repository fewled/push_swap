/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:05:37 by vpolard           #+#    #+#             */
/*   Updated: 2025/12/14 22:13:36 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

void		ft_putstr(char *str);
void		ft_puterr(char *str);
int			ft_strlen(char *str);
int			ft_isdigit(char c);
int			ft_isint(long long n);
int			ft_isnum(char *str);
long long	ft_atoll(char *str);

#endif
