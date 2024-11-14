/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:10:50 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/09 15:22:26 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	len_src;
	size_t		i;

	i = 0;
	len_src = ft_strlen(src);
	if(size == 0)
		return (len_src);
	while (src[i] && --size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
// int main()
// {
// 	char dst[20];
// 	char *src = "lorem ipsum dolor sit amet";
// 	//printf("%u\n", ft_strlcpy(dst, src, 0));
// 	char dst1[20];
// 	char *src1 = "lorem ipsum dolor sit amet";
// 	printf("%\n", strlcpy(NULL, src1, 0));
// }