/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:01 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 16:38:19 by trbonnes         ###   ########.fr       */
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
	new = (*f)(lst->content);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		new->next = (*f)(lst->content);
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
