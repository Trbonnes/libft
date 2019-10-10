/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trbonnes <trbonnes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:39:39 by trbonnes          #+#    #+#             */
/*   Updated: 2019/10/10 15:52:36 by trbonnes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *supp;

	tmp = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (tmp != 0)
	{
		(*del)(tmp->content);
		supp = tmp;
		free(supp);
		tmp = tmp->next;
	}
	lst = NULL;
}
