/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 22:26:46 by paloma            #+#    #+#             */
/*   Updated: 2024/04/20 23:09:19 by paloma           ###   ########.fr       */
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
	return NULL;
}
int	main()
{
	printf("%s\n", ft_strchr("abcd", '\0'));
	printf("%s\n", strchr("abcd", '\0'));
	return (0);
}
