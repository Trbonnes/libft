/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:23:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 16:53:47 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptrd;
	const char		*ptrs;

	ptrd = dest;
	ptrs = src;
	while (n > 0 && *ptrs != c)
	{
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
		n--;
	}
	if (*ptrs == c)
	{
		*ptrd = *ptrs;
		return ((void *)++ptrd);
	}
	else
		return (0);
}
