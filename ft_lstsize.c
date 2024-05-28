/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:20:15 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:20:49 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
