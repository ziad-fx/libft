/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:53 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/07 20:41:21 by zyahansa         ###   ########.fr       */
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
	if (!dest && !src)
		return (NULL);
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
int main()
{
	// char *src= "ABC";
	// char *dst = "ABC";
	// char *s = "abc";
	// char *s1 = "abcf";
	// printf("%p \n%p\n", s , s1);
	// printf("%d", s == s1);
	// printf("dest : %s\n", memcpy("ab\0c", "ab\0c", 6));
	 ft_memcpy("ab\0c","ab\0c", 5);
	printf("test : %s\n");
	return (0);
}
