#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
void ft_print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int main(void)
{
	int i = 26;
	int j = 42;
	t_list *lst;
	t_list *new;
	lst =ft_lstnew(&i);
	new = ft_lstnew(&j);
	ft_lstadd_front(&lst, new);
	new = ft_lstnew(&i);
	ft_lstadd_front(&lst, new);
	new = ft_lstnew(&j);
	ft_lstadd_front(&lst, new);
	new = ft_lstnew(&i);
	ft_lstadd_front(&lst, new);
	ft_print_lst(lst);
}*/


