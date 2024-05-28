/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:15:19 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:15:21 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void teste(void *test)
// {
// 	*(char *)test =  'l';
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int	main()
// {
// 	t_list *lst_test;
// 	lst_test = NULL;
// 	ft_lstadd_back(&lst_test, ft_lstnew(strdup("ahfghfh")));
// 	ft_lstadd_back(&lst_test, ft_lstnew(strdup("anjaskj")));
// 	ft_lstadd_back(&lst_test, ft_lstnew(strdup("paloma")));
// 	ft_lstiter(lst_test, teste);
// 	while (lst_test)
// 	{
// 		printf("%s\n", (char *)lst_test->content);
// 		lst_test = lst_test->next;
// 	}
// }
