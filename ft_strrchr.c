/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:49:06 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/04 09:49:07 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	int last_char = -1;
	char target = (char)c;
	while(s[i])
	{
		if(s[i] == target)
			last_char = i;
		i++;
	}
	if (target == '\0')
        return ((char *)&s[i]);
	if(last_char == -1)
		return (NULL);
	return ((char *)&s[last_char]);
}
// int main()
// {
// 	char *tmp = "bonjour";
// 	char *tmp1 = "bonjour";
// 	printf("%s\n", ft_strrchr(tmp, 'b'));
// 	printf("%s\n", strrchr(tmp1, 'b'));
	
	
// }