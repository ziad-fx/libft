/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:04:27 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 18:44:49 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checker(char s, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, char *set)
{
	int		start;
	int		end;
	char	*tab;
	int		i;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_checker(s[start], set))
		start++;
	end = start;
	while (s[end])
		end++;
	end--;
	while (end >= start && ft_checker(s[end], set))
		end--;
	tab = (char *)malloc((end - start + 2));
	if (!tab)
		return (NULL);
	i = 0;
	while (start <= end)
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
