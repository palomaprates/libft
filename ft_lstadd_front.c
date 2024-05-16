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

void ft_lstadd_front(t_list **lst, t_list *new)
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
int main()
{
	t_list *teste;
	teste = NULL;

	ft_lstadd_front(&teste, ft_lstnew(strdup("1")));
	ft_lstadd_front(&teste, ft_lstnew(strdup("2")));
	ft_lstadd_front(&teste, ft_lstnew(strdup("3")));
	ft_lstadd_front(&teste, ft_lstnew(strdup("4")));
	ft_lstadd_front(&teste, ft_lstnew(strdup("5")));

	while(teste)
	{
		printf("%s\n", (char *)teste->content);
		teste = teste->next;
	}

}
