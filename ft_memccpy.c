/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:23:10 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 08:57:45 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
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
		return (ptrd++);
	}
	else
		return (0);
}
