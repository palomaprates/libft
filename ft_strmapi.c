/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:22:14 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:27:59 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_toupper1(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*new;
	unsigned int		i;

	i = 0;
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
// int	main()
// {
// 	char const s[6] = "tesTe";
// 	printf("%s\n", ft_strmapi(s, ft_toupper));
// 	return (0);
// }
