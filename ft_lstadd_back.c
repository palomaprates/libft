/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:35:28 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:35:29 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = new;
}
// int main()
// {
// 	t_list *test;

// 	test = NULL;
// 	ft_lstadd_back(&test, ft_lstnew(strdup("1")));
// 	ft_lstadd_back(&test, ft_lstnew(strdup("2")));
// 	ft_lstadd_back(&test, ft_lstnew(strdup("3")));

// 	while(test)
// 	{
// 		printf("%s\n", (char *)test->content);
// 		test = test->next;
// 	}
// }
