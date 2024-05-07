/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:01:23 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/07 18:15:24 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char			*temp;
	// unsigned const char		*temp_src;
	// unsigned char			*temp_dest;
	size_t					i;

	i = 0;
	// temp_src = src;
	// temp_dest = dest;
	while (((unsigned char *)src)[i])
		i++;
	temp = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (i < len)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
// int main()
// {
// 	unsigned char dest[5] = "";
// 	unsigned const char src[4] = "aaaa";
// 	unsigned char *str;
// 	unsigned char *teste;
// 	teste = ft_memmove(dest, src, 3);
// 	str = ft_memmove(dest, src, 3);
// 	printf("minha: %s\n", str);
// 	printf("original: %s\n", teste);
// }
