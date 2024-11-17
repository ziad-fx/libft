/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:53 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/14 18:36:34 by zyahansa         ###   ########.fr       */
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
// int main()
// {
// // 	// char *src= "ABC";
// // 	// char *dst = "ABC";
// // 	// char *s = "abc";
// // 	// char *s1 = "abcf";
// // 	// printf("%p \n%p\n", s , s1);
// // 	// printf("%d", s == s1);
// // 	// char p[] = "12345";
// // 	// // printf("dest : %s\n", memcpy(p, p + 1, 7));
// // 	// int i = 0;
// // 	// printf("our function:");
// // 	// while (i < 80)
// // 	// {
// // 	// 	printf("%d and i is %d\n", *(p + i) , i);
// // 	// 	i++;
// // 	// }

// // 	int A = 0;
// // 	//ft_memcpy(void *dest, const void *src, size_t n)
// // 	// printf("dest : %s\n", memcpy("abc", "abc", 15));
// // 	// char *dest = ft_memcpy("abc","abc", 15);
// // 	// char *dest = ft_memcpy("abc","abc", 15);
// // 	//  int i = 0;
// // 	//  while(i < 4)
// // 	//  {
// // 	// 	printf("test : %s\n", dest);
// // 	// 	i--;
// // 	//  }

// // 	return (0);
//     int a = 1337;       // Source integer
//     int b = 0;          // Destination integer, initially 0

//     // Copy memory from `a` to `b` using ft_memcpy
//     ft_memcpy(&b, &a, sizeof(int));

//     // Print the result to check if the copy was successful
//     printf("Source integer a: %d", a);
// }