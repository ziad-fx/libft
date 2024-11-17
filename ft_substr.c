/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:40:12 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 12:55:45 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tab[i] = s[i + start];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Hello, World!";
// 	char	*substr1;
// 	char	*substr2;
// 	char	*substr3;
// 	char	*substr4;

// 	substr1 = ft_substr(str, 7, 5);
// 	substr2 = ft_substr(str, 0, 5);
// 	substr3 = ft_substr(str, 15, 5); // Out of bounds
// 	substr4 = ft_substr(str, 7, 0); // Length is 0

// 	printf("Substring 1: '%s'\n", substr1); // Expected: 'World'
// 	printf("Substring 2: '%s'\n", substr2); // Expected: 'Hello'
// 	printf("Substring 3: '%s'\n", substr3); // Expected: ''
// 	printf("Substring 4: '%s'\n", substr4); // Expected: ''

// 	free(substr1);
// 	free(substr2);
// 	free(substr3);
// 	free(substr4);
// 	return (0);
// }
