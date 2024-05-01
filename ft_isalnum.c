/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:40:08 by pprates-          #+#    #+#             */
/*   Updated: 2024/05/01 20:36:30 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!(c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (0);
	return (1);
}