/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:48:44 by pprates-          #+#    #+#             */
/*   Updated: 2024/04/23 15:01:19 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		i;

	i = 0;
	while (s[i])
		i++;
	new_str = malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}
// int main()
// {
// 	printf("%s\n", ft_strdup("teste"));
// 	return (0);
// }
