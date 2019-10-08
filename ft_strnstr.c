/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:08:04 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 14:29:38 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int		i;
	int		j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return (haystack + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
