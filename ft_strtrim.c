#include "libft.h"

static int	set_compare(char s1, char *set)
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

char	*ft_strtrim(char const *s1, char* set)
{
	char	*new_str;
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	while (set_compare(s1[i], set))
		i++; 
	end = ft_strlen(s1);
	end--;
	while (set_compare(s1[end], set))
		end--;
	new_str = malloc(sizeof(char) * (end - i) + 1);
	if (!new_str)
		return (NULL);
	while (i <= end)
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return new_str;
}

// int	main()
// {
// 	printf("%s\n", ft_strtrim("abababbatesabbabteabbaba", "ab"));
// 	return (0);
// }
