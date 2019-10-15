/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:01:06 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/15 14:59:37 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned		i;
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
