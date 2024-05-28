/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:10:29 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 15:52:30 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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
	new[0] = '\0';
	ft_strlcat(new, (char *)s1, i + j + 1);
	ft_strlcat(new, (char *)s2, i + j + 1);
	return (new);
}
// int	main()
// {
// 	// char s1[6] = "";
// 	// char s2[4] = "42";
// 	char *s = ft_strjoin("", "");
// 	printf("%d\n", strcmp(s, ""));

// 	return (0);
// }
