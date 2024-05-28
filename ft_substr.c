/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:47:49 by paloma            #+#    #+#             */
/*   Updated: 2024/05/28 15:53:50 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s || (start > (unsigned int)ft_strlen(s)))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s + start))
		len = (unsigned int)ft_strlen(s + start);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[start] && i < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
// int main()
// {
// 	printf("%s\n", ft_substr("tile", 2, 7));
// 	return (0);
// }
