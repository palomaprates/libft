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
int ft_lstsize(t_list *lst)
{
	int	i;
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i = i + 1;
	}
	return (i);
}

int	main()
{
	int size;
	t_list *testadd;
	testadd = NULL;
	ft_lstadd_back(&testadd, ft_lstnew(strdup("333")));
	size = ft_lstsize(testadd);
	printf("%d\n", size);
}
