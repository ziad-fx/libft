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
static void	free_tab(char **tab, int word_index)
{
	int	j;

	j = 0;
	while (j < word_index)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}
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

char **ft_split(const char *s, char c)
{
	char *tab;
	int i;
	int len_word;
	int j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));

	while (j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		len_word = count_len_word(s, &i, c);
		tab[j] = ft_substr(s, i, len_word);
		if(!tab[j])
			return(free_tab(tab, j));
		
		j++;
	}
}