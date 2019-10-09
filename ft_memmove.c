/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:27:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 16:47:46 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptrd;
	const char		*ptrs;
	size_t			n;

	ptrd = dst;
	ptrs = src;
	if (dst > src)
	{
		n = ft_strlen(ptrs);
		n = n - (n - len);
		while (n-- >= 0)
			*(ptrd + n) = *(ptrs + n);
	}
	else
	{
		while (len-- > 0)
		{
			*ptrd = *ptrs;
			ptrd++;
			ptrs++;
		}
	}
	return (dst);
}
