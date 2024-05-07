/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:33:43 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/07 18:29:20 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t				i;

	i = 0;
	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && temp_s1[i] == temp_s2[i])
		i++;
	return ((int) temp_s1[i] - temp_s2[i]);
}
// int main()
// {
// 	printf("minha: %d\n", ft_memcmp("a", "c", 2));
// 	printf("original: %d\n", memcmp("a", "c", 2));
// 	return (0);
// }
