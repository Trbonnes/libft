/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:30:04 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/08 15:00:08 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int			res;
	int			neg;

	res = 0;
	neg = 1;
	while ((*nptr >= 0 && *nptr <= 32) || *nptr >= 127)
		nptr++;
	if (*nptr == '-')
	{
		neg = -neg;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - 48);
		nptr++;
	}
	return (res * neg);
}
