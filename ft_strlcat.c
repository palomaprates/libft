/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:06:09 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/07 16:37:04 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (dest_size <= j)
		return (dest_size + i);
	total = i + j;
	i = 0;
	while (j < dest_size - 1 && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (total);
}
// int	main()
// {
// 	char dest[15] = "1234";
// 	char src[40] = "8904";
// 	// printf("%zu\n", ft_strlcat(dest, src, 5));
// 	printf("%zu\n", strlcat(dest, src, 5));
// 	printf("%s\n", dest);
// 	return (0);
// }
