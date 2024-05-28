/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:16:22 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:30:45 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c1;
	int		end;

	c1 = (char) c;
	end = ft_strlen(s) - 1;
	if (!c1)
		return ((char *)s + end + 1);
	while (end >= 0)
	{
		if (s[end] == c1)
			return ((char *)&s[end]);
		end--;
	}
	return (NULL);
}
// int main()
// {
// 	printf("%s\n", ft_strrchr("acbc", 'c'));
// 	return (0);
// }
