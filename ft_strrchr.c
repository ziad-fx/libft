/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:49:06 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/18 09:57:38 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	int		len;

	target = (char)c;
	len = ft_strlen(s);
	if (target == '\0')
		return ((char *)&s[len]);
	while (len--)
	{
		if (s[len] == target)
			return ((char *)&s[len]);
	}
	return (NULL);
}
