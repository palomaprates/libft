#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;	
	return (lst);
}
// int	main()
// {
// 	t_list *test;
// 	t_list *lst;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("2")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("3")));
// 	test = ft_lstlast(lst);
// 	printf("%s\n", (char *)test->content);
// }
