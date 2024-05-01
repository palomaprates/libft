/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:06:50 by paloma            #+#    #+#             */
/*   Updated: 2024/05/01 20:54:54 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[i] && i < dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[src_len])
		src_len++;
	return (src_len);
}

// int	main()
// {
// 	char dest[15] = "1234";
// 	char src[40] = "6313123";
// 	printf("%zu\n", ft_strlcpy(dest, src, 2));
// 	printf("%zu\n", strlcpy(dest, src, 2));
// 	printf("%s\n", dest);
// 	return (0);
// }
