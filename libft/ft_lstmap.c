#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *map;
	t_list *temp;

    f(lst->content);
    map = ft_lstnew(lst->content);
	if (!map)
		return (NULL);
    while(lst->next)
    {
        lst = lst->next;
        f(lst->content);
		temp = ft_lstnew(lst->content);
		if(!temp)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, temp);
    }
    return (map);
}
