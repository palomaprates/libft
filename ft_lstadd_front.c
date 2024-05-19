#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
// int	main()
// {
// 	t_list *test;
// 	test = NULL;

// 	ft_lstadd_front(&test, ft_lstnew(strdup("3")));
// 	ft_lstadd_front(&test, ft_lstnew(strdup("2")));
// 	while(test)
// 	{
// 		printf("%s\n", (char *)test->content);
// 		test = test->next;
// 	}
// }
