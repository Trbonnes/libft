/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:37:50 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 14:24:46 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = s1;
	ptr2 = s2;
	if (ptr1 == ptr2 || n == 0)
		return (0);
	while (n > 0)
	{
		if (*ptr1 != *ptr2 || *ptr1 == '\0')
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}