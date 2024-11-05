/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:44:46 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/02 10:33:02 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len_word(const char *s, int start, char c)
{
	int	len;

	len = 0;
	while (s[start] && s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	freemyhomie(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static char	*fill_word(const char *s, int *i, char c)
{
	int		length;
	char	*res;
	int		j;

	length = count_len_word(s, *i, c);
	res = malloc(length + 1);
	if (!res)
		return (NULL);
	j = 0;
	while (j < length)
		res[j++] = s[(*i)++];
	res[j] = '\0';
	return (res);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		word_index;
	char	**tab;

	i = 0;
	word_index = 0;
	tab = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			tab[word_index] = fill_word(str, &i, c);
			if (!tab[word_index])
				return (freemyhomie(tab), NULL);
			word_index++;
		}
		else
			i++;
	}
	tab[word_index] = NULL;
	return (tab);
}

int	main(void)
{
	char	*str = " zed aha";
	char	set = ' ';
	char	**str2;
	int		i;

	str2 = ft_split(str, set);
	if (!str2)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (str2[i])
	{
		printf("--> %s\n", str2[i]);
		free(str2[i++]);
	}
	free(str2);
	return (0);
}
