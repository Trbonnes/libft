/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:23:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 11:16:35 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	ptrd = dest;
	ptrs = (unsigned char *)src;
	while (n > 0 && *ptrs != (unsigned char)c)
	{
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
		n--;
	}
	if (*ptrs == (unsigned char)c)
	{
		*ptrd = *ptrs;
		return ((void *)++ptrd);
	}
	else
		return (0);
}
