/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:29:10 by paloma            #+#    #+#             */
/*   Updated: 2024/05/08 22:00:32 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_little;

	i = 0;
	size_little = ft_strlen(little);
	if (!little || !little[0])
		return ((char *)&big[i]);
	if (len == 0 || !big)
		return (NULL);
	while (big[i] && i < len)
	{
		if (size_little > len - i)
			return (NULL);
		if (ft_strncmp(&big[i], little, size_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int	main()
// {
// 	printf("%s\n", ft_strnstr("caaaaolina", "ina", 7));
// 	return (0);
// }
