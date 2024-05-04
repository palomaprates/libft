/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:29:10 by paloma            #+#    #+#             */
/*   Updated: 2024/05/04 10:37:39 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little || !(little[0]))
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// int	main()
// {
// 	printf("%s\n", ft_strnstr("t1este123t", "este", 2));
// 	return (0);
// }
