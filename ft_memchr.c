/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:21:19 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/07 12:11:52 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	hay;
	size_t			i;

	src = (unsigned char *)s;
	hay = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == hay)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char tmp[] = "zaid ahansal";
// 	printf("%s\n", ft_memchr(tmp, 'a', sizeof(tmp)));
// 	printf("%s", memchr(tmp, 122, sizeof(tmp)));
// }
