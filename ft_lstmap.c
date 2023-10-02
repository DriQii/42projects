/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evella <evella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:56:15 by evella            #+#    #+#             */
/*   Updated: 2023/10/02 00:02:49 by evella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list	*map;
	t_list	*startmap;

	if (!f || !del || !lst)
		return (NULL);
	map = ft_lstnew(f(lst->content));
	if (!map)
		return (NULL);
	lst = lst->next;
	startmap = map;
	while (lst)
	{
		map->next = ft_lstnew(f(lst->content));
		if (!map->next)
		{
			ft_lstclear(&startmap, del);
			map = NULL;
			return (NULL);
		}
		lst = lst->next;
		map = map->next;
	}
	return (startmap);
}
