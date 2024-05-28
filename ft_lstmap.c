#include "libft.h"
#include <string.h>
#include <stdio.h>

void delete(void *teste)
{
	free(teste);
}

void *teste(void *test)
{
	static int a = 0;
	
	void *new = (void *)ft_strdup(test);
	*(char *)new = 'l';
	a++;
	// if (a == 2) {
	// 	return NULL;
	// }
	return (new);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;
    
    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

// int	main()
// {
// 	t_list	*lst;
// 	t_list	*test;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("teste")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("ooi")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("tchau")));
// 	test = ft_lstmap(lst, teste, delete);
// 	while (test)
// 	{
// 		printf("%s\n", (char *)test->content);
// 		test = test->next;
// 	}
// 	return (0);
// }
