/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:54:36 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 20:08:39 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int		i;
	long	counter;

	i = 0;
	counter = n;
	if (counter == 0)
		i++;
	if (counter < 0)
	{
		i++;
		counter = -counter;
	}
	while (counter > 0)
	{
		i++;
		counter /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;

	nb = n;
	len = ft_counter(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (nb == 0)
		res[0] = '0';
	res[len--] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		res[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (res);
}
