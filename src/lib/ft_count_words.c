/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:57:15 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/28 10:57:17 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int      ft_count_words(char *str)
{
        int     in_word;
        int     count;
        int     index;

        in_word = 0;
        count = 0;
        index = 0;
        while (str[index])
        {
                if (str[index] != ' ' && !in_word)
                {
                        count++;
                        in_word++;
                }
                if (str[index] == ' ' && in_word)
                        in_word--;
                index++;
        }
        return (count);
}
