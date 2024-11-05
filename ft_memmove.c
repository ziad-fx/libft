/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:26:53 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/04 20:30:24 by zyahansa         ###   ########.fr       */
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

	if(!dst && !src)
		return (NULL);

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
int	main()
{
	// char src[20] = "ziad ahansal";
	// printf("Custom function : %s\n", ft_memmove(src + 4, src, 8));

	// char src1[20] = "ziad ahansal";
	// printf("System function : %s\n", memmove(src1 + 4, src1, 8));

	// char src2[25] = "ziad";
	// char dst[25] = "ahansal";
	// printf("Test case 2: %s\n", ft_memmove(dst, src2, 8));
	char dst[33] = "ayman chorids is here";
	char *res = memmove(dst+2, dst, 25);
	printf("%s\n", res);
	// return 0;
}
