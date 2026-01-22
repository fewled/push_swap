/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolard <vpolard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:47:32 by vpolard           #+#    #+#             */
/*   Updated: 2026/01/22 13:21:29 by vpolard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int      count_words(char *str)
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

static char	*extract_word(char *str, int *index)
{
	int		start;
	char	*word;
	int		word_index;

	while (str[*index] == ' ' && str[*index])
		*index += 1;
	start = *index;
	while (str[*index] != ' ' && str[*index])
		*index += 1;
	word = malloc(sizeof(char) * (*index - start + 1));
	if (!word)
		return ((char *)0);
	word_index = 0;
	while (start < *index)
		word[word_index++] = str[start++];
	word[word_index] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**list;
	int		word_count;
	int		index;
	int		str_index;

	word_count = count_words(str);
	list = malloc(sizeof(char *) * (word_count + 1));
	if (!list)
		return ((char **)0);
	index = 0;
	str_index = 0;
	while (index < word_count)
	{
		list[index] = extract_word(str, &str_index);
		if (!list[index])
		{
			while (index >= 0)
				free(list[index--]);
			return ((char **)0);
		}
		index++;
	}
	list[index] = (char *)0;
	return (list);
}
