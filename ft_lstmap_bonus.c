/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:50:01 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 14:30:24 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *tmp;
	t_list *new;

	new = 0;
	if (lst == 0 || f == 0)
		return ;
	new = (*f)(lst->content);
	tmp = new;
	while (lst)
	{
		new = new->next;
		lst = lst->next;
		new = (*f)(lst->content);
	}
	return (tmp);
}
