/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:27:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 15:44:03 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*ptrd;
	const unsigned char		*ptrs;
	size_t					i;

	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
		while (++i <= len)
			ptrd[len - i] = ptrs[len - i];
	else
		while (len-- > 0)
			*(ptrd++) = *(ptrs++);
	return (dst);
}
