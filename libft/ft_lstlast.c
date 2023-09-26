#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *last;
	if (!lst)
		return NULL;
	while(lst->next)
	{
		lst = lst->next;
	}
	last = lst;
	return (last);
}
