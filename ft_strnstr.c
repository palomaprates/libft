/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:29:10 by paloma            #+#    #+#             */
/*   Updated: 2024/05/07 19:14:58 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little || little == big)
		return ((char *)&big[i]);
	if (!len || !big)
		return (NULL);
	while (big[i] && i < len - 1)
	{
		if (ft_strncmp(&big[i], little, ft_strlen((char *)little)) == 0)
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
