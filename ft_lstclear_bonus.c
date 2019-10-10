/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:39:39 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 14:30:27 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *del;

	tmp = *lst;
	if (tmp == 0 || del == 0)
		return ;
	while (tmp != 0)
	{
		(*del)(tmp->content);
		del = tmp;
		free(del);
		tmp = tmp->next;
	}
	lst = 0;
}
