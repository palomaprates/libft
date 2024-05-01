/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:24 by pprates-          #+#    #+#             */
/*   Updated: 2024/04/23 15:57:19 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(sizeof(char) * (nmemb * size));
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (temp[i])
	{
		temp[i] = '\0';
		i++;
	}
	return (temp);
}

// int main()
// {
// 	unsigned char *str;
// 	str = ft_calloc(2, 3);
// 	printf("%s\n", str); 
// 	return (0);
// }
