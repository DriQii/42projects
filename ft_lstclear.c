/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evella <evella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:40:59 by evella            #+#    #+#             */
/*   Updated: 2023/10/01 23:41:11 by evella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
		return ;
	while (temp->next)
	{
		del(temp->content);
		*lst = temp;
		temp = temp->next;
		free(*lst);
	}
	del(temp->content);
	free(temp);
	temp = NULL;
	*lst = NULL;
}
