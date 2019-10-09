/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:01:06 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 16:55:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	size_t			src_len;

	i = 0;
	src_len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize <= i)
		src_len = src_len + dstsize;
	else
		src_len = src_len + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
