/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:07:16 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 13:28:51 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			len;

	ptr = s;
	len = ft_strlen(ptr);
	ptr = ptr + len;
	while (len >= 0)
	{
		if (*ptr == c)
			return ((char *)ptr);
		ptr--;
		len--;
	}
	return (0);
}
