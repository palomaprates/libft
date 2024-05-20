#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	
	current = *lst;
	
	while (current->next)
	{
		del(current->next->content);
		current = current->next;
	}
	free(lst);
}
