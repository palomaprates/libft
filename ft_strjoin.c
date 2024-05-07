/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:10:29 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/07 17:26:47 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	new = malloc(sizeof(char) * (i + j + 1));
	if (!new)
		return (NULL);
	ft_strlcat(new, (char *)s1, i + j + 1);
	ft_strlcat(new, (char *)s2, i + j + 1);
	return (new);
}
// int	main()
// {
// 	char s1[6] = "teste";
// 	char s2[4] = "123";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }
