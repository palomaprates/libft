/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:24 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:33:11 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	bytes = count * size;
	if (size && ((bytes / size) != count))
		return (NULL);
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}
