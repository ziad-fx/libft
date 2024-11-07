/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:49:14 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/07 10:09:53 by zyahansa         ###   ########.fr       */
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
int main()
{

	// int a = 1;

	// ft_memset(&a, 0, 4);
	// ft_memset(&a, 0, 3);
	// ft_memset(&a,5, 2);
	// ft_memset(&a, 57, 1);
	// printf("%d", a);
	char s[] = "abc";
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%p\n%p\n%p", s, s1, s2);
	
}
