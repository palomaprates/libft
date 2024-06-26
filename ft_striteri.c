/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:50:12 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:26:29 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_tolower(char *c)
// {
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c += 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int main()
// {
// 	char *s = "tEsTE";
// 	ft_striteri(s, ft_tolower);
// 	printf("%s", s);
// }
