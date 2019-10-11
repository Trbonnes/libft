/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:01 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/11 18:14:03 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *tmp;
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (lst == NULL || f == NULL)
		return (lst);
	new->content = (*f)(lst->content);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = malloc(sizeof(t_list))))
			return (NULL);
		new = new->next;
		new->content = (*f)(lst->content);
		lst = lst->next;
	}
	return (tmp);
}
