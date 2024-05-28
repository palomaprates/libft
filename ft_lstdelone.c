#include "libft.h"
#include <string.h>

void del(void *teste)
{
        free(teste);
}

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
        del(lst->content);
        free(lst);
}
// int     main()
// {
//         t_list *new = ft_lstnew(ft_strdup("123"));
//         ft_lstdelone(new, del);
// }
