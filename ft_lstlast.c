#include "libft.h"
#include <string.h>

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;

	current = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while(current->next)
		current = current->next;
	current->next = new;
}

t_list *ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;	
	return (lst);
}
int	main()
{
	t_list *test;
	t_list *lst;
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(strdup("2")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("3")));
	test = ft_lstlast(lst);
	printf("%s\n", (char *)test->content);
}
