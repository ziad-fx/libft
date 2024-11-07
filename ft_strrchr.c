/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:49:06 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/06 17:35:04 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{	
	char target = (char)c;
	int len = ft_strlen(s);
	if(target == '\0')
		return ((char *)&s[len]);
	while(len--)
	{
		if(s[len] == target)
			return ((char *)&s[len]);
	}
	return (NULL);
}
// int main()
// {
// 	char *tmp = "niga";
// 	char *tmp1 = "niga";
// 	printf("%s\n", ft_strrchr("zagid aghansgal", '\0'));
// 	printf("%s\n", strrchr("zagid aghansgal", '\0'));
// }