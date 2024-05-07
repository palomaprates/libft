/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:33:18 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/07 17:25:26 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	negative_sign;

	i = 0;
	nbr = 0;
	negative_sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative_sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr * negative_sign);
}
// int main()
// {
// 	char str[] = " +1234aaa567";
// 	int to_print = ft_atoi(str);
// 	int teste = atoi(str);
// 	printf("minha: %d\n", to_print);
// 	printf("original: %d", teste);
// 	return (0);
// }
