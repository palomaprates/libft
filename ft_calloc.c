/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:24 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/09 21:37:36 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;
	// size_t			i;
	size_t			bytes;

	// i = 0;
	bytes = nmemb * size;
	if (size && ((bytes / size) != nmemb))
		return (NULL);
	temp = malloc(bytes);
	if (!temp)
		return (NULL);
	ft_bzero(temp, bytes);
	// while (0 > bytes)
	// {
	// 	temp[i] = '\0';
	// 	i++;
	// 	bytes--;
	// }
	return(temp);
}

// int main()
// {
// 	unsigned char *str;
// 	str = ft_calloc(2, 3);
// 	printf("%s\n", str); 
// 	return (0);
// }
