/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:01 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/11 09:28:22 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *tmp;
	t_list *new;

	new = 0;
	if (lst == NULL || f == NULL)
		return (lst);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new = (*f)(lst->content);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = malloc(sizeof(t_list))))
			return (NULL);
		new->next = (*f)(lst->content);
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
