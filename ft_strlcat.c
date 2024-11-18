/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:31:28 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/18 11:46:53 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	max_dest;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest >= dstsize)
		return (len_src + dstsize);
	max_dest = dstsize - len_dest - 1;
	i = 0;
	while (src[i] && i < max_dest)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
