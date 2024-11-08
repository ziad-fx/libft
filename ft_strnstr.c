/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:48:04 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/07 12:20:09 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	 i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
		
	if (haystack == NULL && len == 0)
		return (NULL);
		
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
// #include <limits.h>
 
// int main()
// {
// 	// size_t SIZE_MAX;
	
// 	char src[] = "ziad trader";
// 	char set[] = "tr";
// 	printf("%s\n", ft_strnstr(NULL, "NU", SIZE_T_MAX * 3));
// 	//printf("%s", strnstr(NULL, "NULL", 4));
// 	// 18446744073709551615 - 1 + 18446744073709551615 + 1  18446744073709551615 + 1 - 1= 
// }