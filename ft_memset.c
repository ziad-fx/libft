/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:49:14 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/12 10:03:06 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buffer;
	unsigned char	value;

	buffer = (unsigned char *)b;
	value = (unsigned char )c;
	i = 0;
	while (i < len)
	{
		buffer[i] = value;
		i++;
	}
	return (b);
}
// int main()
// {

// 	// int a = 1;

// 	// ft_memset(&a, 0, 4);
// 	// ft_memset(&a, 0, 3);
// 	// ft_memset(&a,5, 2);
// 	// ft_memset(&a, 57, 1);
// 	// printf("%d", a);
// 	// char s[] = "abc";
// 	// char s1[] = "abc";
// 	// char s2[] = "abc";
// 	// printf("%p\n%p\n%p", s, s1, s2);

//     int    i[] = {1, 42};

//     ft_memset(&i[0], 57, 1);
//     ft_memset((char *)&i[0] + 1, 5, 1);
//     ft_memset((char *)&i[0] + 2, 0, 1);
//     ft_memset((char *)&i[0] + 3, 0, 1);

    
//     ft_memset(&i[1], 44, 1);
//     ft_memset((char *)&i[1] + 1, 248, 1);
//     ft_memset((char *)&i[1] + 2, 255, 1);
//     ft_memset((char *)&i[1] + 3, 255, 1);
//     printf("%d\n", i[0]);
//     printf("%d", i[1]);
// }