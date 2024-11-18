/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:26:53 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/17 21:38:15 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;
	size_t				i;

	dest_cpy = (unsigned char *)dst;
	src_cpy = (const unsigned char *)src;
	if (dst == src)
		return (dst);
	if (dest_cpy < src_cpy)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i--)
			dest_cpy[i] = src_cpy[i];
	}
	return (dst);
}
