#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *ptrlst;


	ptrlst = (t_list *)malloc(sizeof(*ptrlst));
	if (!ptrlst)
		return (NULL);
	ptrlst->next = NULL;
	ptrlst->content = content;

	return (ptrlst);
}
