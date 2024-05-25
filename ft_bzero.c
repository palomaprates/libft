/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:07:45 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/25 17:29:58 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;

	i = 0;
	temp_s = (unsigned char *)s;
	while (i < n) 
	{
		temp_s[i] = '\0';
		i++;
	}
}
// int main()
// {
//     unsigned char s[6];
//     ft_bzero(s, 5);
//     printf("%s", s);
//     return (0);
// }
