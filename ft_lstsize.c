#include "libft.h"

int	ft_lstsize(t_list *lst)
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

// int	main()
// {
// 	int size;
// 	t_list *testadd;
// 	testadd = NULL;
// 	ft_lstadd_back(&testadd, ft_lstnew(strdup("333")));
// 	size = ft_lstsize(testadd);
// 	printf("%d\n", size);
// }
