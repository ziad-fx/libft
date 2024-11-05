/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:04:27 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/02 14:58:11 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_checker(char s, char *set)
{
	int i = 0;
	while(set[i])
	{
		if(set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(const char *s, char *set)
{
	int start = 0;
	int end = 0;
	char *tab;
	int i  = 0;
	
	if (!s || !set)
		return (NULL);

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
		return(NULL);

	while (end >= start)
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	tab[i] = 0;
	return (tab);
}
// int main()
// {
	
// 	char src[] = "ziyad";
// 	char set[] = "abab";
// 	char *res = ft_strtrim(src, set);
// 	printf("s[%s]", res);
// }
	
	
	
	

	