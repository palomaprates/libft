/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:15:29 by pprates-          #+#    #+#             */
/*   Updated: 2024/04/23 15:12:50 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*temp_dest;
	unsigned const char	*temp_src;
	size_t					i;

	temp_dest = dest;
	temp_src = src;
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
}
// int main()
// {
// 	unsigned char dest[10];
// 	unsigned char src[6] = "teste";
// 	ft_memcpy(dest, src, 8);
// 	printf("%s", dest);
// 	return (0);
// }
