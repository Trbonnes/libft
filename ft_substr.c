/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:43:13 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 17:09:42 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	char *ptr;
	char *src;

	if ((dest = malloc(len)) == NULL)
		return (NULL);
	dest[len] = '\0';
	ptr = dest;
	src = (char *)s + start;
	while (*src != '\0' && dest != (ptr + len))
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
