/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:27:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 16:28:28 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned char	*ptrd;
	const char		*ptrs;
	int				n;

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
