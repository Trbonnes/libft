/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:43:13 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 17:00:55 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	char *ptr;

	if ((dest = malloc(len)) == NULL)
		return (NULL);
	dest[len] = '\0';
	ptr = dest;
	s = s + start;
	while (*s != '\0' && *dest != '\0')
	{
		*dest = *s;
		dest++;
		s++;
	}
	return (ptr);
}
