#include "libft.h"
#include <string.h>

void teste(void *test)
{
	*(char *)test =  'l';
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
int	main()
{
	t_list *lst_test;
	lst_test = NULL;
	ft_lstadd_back(&lst_test, ft_lstnew(strdup("ahfghfh")));
	ft_lstadd_back(&lst_test, ft_lstnew(strdup("anjaskj")));
	ft_lstadd_back(&lst_test, ft_lstnew(strdup("paloma")));
	ft_lstiter(lst_test, teste);
	while (lst_test)
	{
		printf("%s\n", (char *)lst_test->content);
		lst_test = lst_test->next;
	}
}
