/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:43:54 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 10:54:10 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_word(char c, char b, char *charset)
{
	return (!ft_separator(c, charset) && ft_separator(b, charset));
}

int		word_count(char *str, char *charset)
{
	int	w_count;
	int	i;

	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if (ft_word(str[i], str[i - 1], charset) ||
				(!ft_separator(str[i], charset) && i == 0))
			w_count++;
		i++;
	}
	return (w_count);
}

int		*word_size(char *str, char *charset)
{
	int i;
	int j;
	int w_count;
	int *w_size;

	i = 0;
	w_count = word_count(str, charset);
	w_size = malloc(sizeof(int) * w_count);
	while (i <= w_count)
	{
		w_size[i] = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!ft_separator(str[i], charset))
			w_size[j]++;
		else if (i > 0 && !ft_separator(str[i - 1], charset))
			j++;
		i++;
	}
	return (w_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*w_size;

	words = malloc(sizeof(char*) * (word_count(str, charset) + 1));
	w_size = word_size(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!ft_separator(str[i], charset))
		{
			if (i == 0 || ft_word(str[i], str[i - 1], charset))
				words[index] = malloc(sizeof(char) * (w_size[index] + 1));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !ft_separator(str[i - 1], charset) && ++index)
			j = 0;
	}
	words[word_count(str, charset)] = 0;
	return (words);
}
