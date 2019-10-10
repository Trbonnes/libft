/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:14:25 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 14:30:22 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	if ((elem = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (elem)
	{
		elem->content = content;
		elem->next = 0;
	}
	return (elem);
}
