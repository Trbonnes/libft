/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:11:44 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/09 16:29:36 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *ptr;

	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr++;
	}
	return (0);
}
