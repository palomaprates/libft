/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:21:29 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:22:23 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
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
