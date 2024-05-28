/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:06:33 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:17:59 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	int		i;
	int		end;

	i = 0;
	c1 = (char) c;
	end = ft_strlen(s);
	if (!c1)
		return ((char *)s + end);
	while (s[i])
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", ft_strchr("abcd", 'b'));
// 	printf("%s\n", strchr("abcd", 'b'));
// 	return (0);
// }
