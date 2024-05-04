/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:21:08 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/04 10:41:12 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;
	int				temp_c;

	i = 0;
	temp_s = s;
	temp_c = c;
	while (i < n)
	{
		temp_s[i] = temp_c;
		i++;
	}
	temp_s[i] = '\0';
	return (s);
}
// int main()
// {
//     unsigned char s[4];
//     ft_memset(s, 'A', 3);
//     printf("%s", s);
//     return (0);
// }
