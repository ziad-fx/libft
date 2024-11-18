/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:04:27 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/18 11:30:23 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checker(char s, const char *set)
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

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		start;
	size_t		end;
	char		*tab;
	size_t		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_checker(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	if (start == end)
		return (ft_strdup(""));
	end--;
	while (end >= start && ft_checker(s1[end], set))
		end--;
	tab = (char *)malloc((end - start + 2));
	if (!tab)
		return (NULL);
	i = 0;
	while (start <= end)
		tab[i++] = s1[start++];
	return (tab[i] = '\0', tab);
}
