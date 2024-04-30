#include <stdio.h>
void	ft_tolower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void ft_striteri(char *s, void (*f)(char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
int main()
{
	char *s = "tEsTE";
	ft_striteri(s, ft_tolower);
	printf("%s", s);
}
