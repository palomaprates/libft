/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:12:03 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/28 16:29:29 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_compare(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		j;
	int		end;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (set_compare(s1[i], set))
		i++; 
	end = ft_strlen(s1);
	end--;
	while (set_compare(s1[end], set))
		end--;
	if (i > end)
		return (ft_strdup(""));
	new_str = malloc(sizeof(char) * (end - i + 2));
	if (!new_str)
		return (NULL);
	while (i <= end)
		new_str[j++] = s1[i++];
	new_str[j] = '\0';
	return (new_str);
}

// int	main()
// {
// 	char *str;
// 	str = ft_strtrim("   xxxtripouille   xxxxxx", " x");
// 	free(str);
// 	return (0);
// }
