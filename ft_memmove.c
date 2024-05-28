/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:01:23 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:25:06 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;
	size_t			i;

	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dest;
	if (src < dest)
	{
		while (len > 0)
		{
			len--;
			temp_dest[len] = temp_src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
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
