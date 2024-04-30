/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:47:49 by paloma            #+#    #+#             */
/*   Updated: 2024/04/28 11:59:13 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new;
	size_t	i;

	i = 0;

	new = malloc(sizeof(char) * (len + 1));

	if (!new || start >= strlen(s))
		return (NULL);
	while(s[start] && i < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
int main()
{
	printf("%s\n", ft_substr("teste", 32, 5));
	return (0);
}
