/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:33:43 by pprates-          #+#    #+#             */
/*   Updated: 2024/04/23 13:27:45 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*temp_s1;
	unsigned const char	*temp_s2;
	size_t				i;

	i = 0;
	temp_s1 = s1;
	temp_s2 = s2;
	if (n == 0)
		return (0);
	while (i < n && temp_s1[i] == temp_s2[i])
		i++;
	return (temp_s1[i] - temp_s2[i]);
}
// int main()
// {
// 	printf("minha: %d\n", ft_memcmp("a", "c", 2));
// 	printf("original: %d\n", memcmp("a", "c", 2));
// 	return (0);
// }
