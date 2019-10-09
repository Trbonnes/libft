/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:43:54 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 12:37:39 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcount(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 || (s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

int		*ft_sizeeach(char const *s, char c)
{
	int		i;
	int		j;
	int		*size;

	i = 0;
	j = 0;
	size = malloc((sizeof(int)) * ft_strcount(s, c));
	while (i <= ft_strcount(s, c))
		size[i++] = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			size[j]++;
		else if (i > 0 && s[i - 1] != c)
			j++;
		i++;
	}
	return (size);
}

char	*ft_lock(char *str, int size)
{
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	return (str);
}

char	**ft_globallock(int size)
{
	char **str;

	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		*size;
	int		i;
	int		j;
	int		k;

	dest = ft_globallock(ft_strcount(s, c) + 1);
	size = ft_sizeeach(s, c);
	i = -1;
	j = 0;
	k = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			if (i == 0 || (s[i] != c && s[i - 1] == c))
				dest[j] = ft_lock(dest[j], size[j] + 1);
			dest[j][k] = s[i];
			dest[j][++k] = '\0';
		}
		else if (i > 0 && s[i - 1] != c && ++j)
			k = 0;
	}
	dest[j] = 0;
	return (dest);
}
