/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:55:51 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:14:07 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i + 1] == c && s[i] != c)
			|| (s[i + 1] == '\0' && s[i] != c))
			j++;
		i++;
	}
	return (j);
}

static void	ft_free(char **new_str, int j)
{
	while (j > 0)
		free(new_str[j--]);
	free(new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		words_nbr;
	int		i;
	int		j;

	words_nbr = count_words(s, c);
	new_str = malloc(sizeof(char *) * (words_nbr + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	i = 0;
	while (j < words_nbr)
	{
		while (s[i] && s[i] == c)
			i++;
		s = s + i;
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		new_str[j] = malloc(sizeof(char) * (i + 1));
		if (!new_str[j])
			return (ft_free(new_str, j), NULL);
		ft_strlcpy(new_str[j++], s, ++i);
	}
	return (new_str[j] = NULL, new_str);
}

// int	main()
// {
// 	char const s[] = "--teste----oi-a";
// 	char	**new_str;
// 	new_str = ft_split(s,'-');
// 	while(*new_str)
// 	{
// 		printf("%s\n", *new_str);
// 		new_str++;
// 	}
// 	return (0);
// }
