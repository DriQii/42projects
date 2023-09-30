#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = *lst;
	if (!*lst)
		return;
	while (temp->next)
	{
		del(temp->content);
		*lst = temp;
		temp = temp->next;
		free(*lst);
		//*lst = NULL;
	}
	del(temp->content);
	free(temp);
	temp = NULL;
	*lst = NULL;
}
