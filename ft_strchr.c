/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:26:46 by paloma            #+#    #+#             */
/*   Updated: 2024/04/23 13:54:53 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	if (c == s[i])
		return ((char*)&s[i]);
	return (NULL);
}
// int	main()
// {
// 	printf("%s\n", ft_strchr("abcd", 'b'));
// 	printf("%s\n", strchr("abcd", 'b'));
// 	return (0);
// }
