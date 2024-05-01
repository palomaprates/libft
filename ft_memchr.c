/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:01:53 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/01 20:45:19 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*temp_s;
	unsigned char		temp_c;
	size_t				i;

	temp_c = c;
	temp_s = s;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	unsigned const char s[5] = "bcad";
// 	unsigned char *result;
// 	unsigned char *teste;
// 	result = ft_memchr(s, 'a', 3);
// 	teste = memchr(s, 'a', 3);
// 	printf("minha: %s\n", result);
// 	printf("original: %s\n", teste);
// }
