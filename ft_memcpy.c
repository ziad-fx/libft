/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:53 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/17 21:37:42 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src_cpy;
	size_t			i;

	if (dest == src)
		return (dest);
	dst = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
