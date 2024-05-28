/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:36:54 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:38:02 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *teste)
// {
//         free(teste);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
// int     main()
// {
//         t_list *new = ft_lstnew(ft_strdup("123"));
//         ft_lstdelone(new, del);
// }
