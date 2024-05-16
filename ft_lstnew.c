#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

int main()
{
	t_list *lista;
	char	*new = "teste";
	lista = ft_lstnew(new);
	printf("%s\n", (char *)lista->content);
	return (0);
}
