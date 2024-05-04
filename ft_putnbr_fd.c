/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:14:57 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/04 10:39:41 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(fd, "-", 1);
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	c = nbr % 10 + 48;
	write(fd, &c, 1);
}
