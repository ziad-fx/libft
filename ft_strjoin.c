/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:22:51 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/10 19:40:18 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	char *tab;
	if(!s1 || !s2)
		return (NULL);
	int len;
	len = ft_strlen(s1) + ft_strlen(s2);
	tab = (char*)malloc(len + 1);
	if(!tab)
		return(NULL);
	while (s1[i])
		tab[j++] = s1[i++];
	i = 0;
	while(s2[i])
		tab[j++] = s2[i++];
	tab[j] = '\0';
	return(tab);
}
