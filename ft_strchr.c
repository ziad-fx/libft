/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:09:27 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/02 15:17:17 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char target = (char)c;
	int i = 0;

	while(s[i])
	{
		if(s[i] == target)
			return ((char *)&s[i]);
		i++;
	}
	if (target == '\0')
        return ((char *)&s[i]);
	return (NULL);
}
// int main()
// {
// 	char *tmp = "onjour";
// 	printf("%s", ft_strchr(tmp, 'o'));
	
// }