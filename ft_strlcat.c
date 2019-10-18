/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:01:06 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/18 09:14:41 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			destlen;
	size_t			i;
	char			*scursor;
	char			*dcursor;

	scursor = src;
	dcursor = dest;
	i = 0;
	while (i++ < size && *dcursor != '\0')
		dcursor++;
	destlen = dcursor - dest;
	if (size - destlen == 0)
		return (destlen + ft_strlen(src));
	i = destlen;
	while (*scursor != '\0')
	{
		if (i++ < size - 1)
		{
			*dcursor = *scursor;
			dcursor++;
		}
		scursor++;
	}
	*dcursor = '\0';
	return (destlen + scursor - src);
}
