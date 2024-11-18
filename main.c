/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:59:51 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/18 10:00:17 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

// int main()
// {

// }
// *******************************************************
// int main()
// {
// 	t_list *tmp;
// 	t_list *tmp1;
// 	t_list *new;
// 	tmp = ft_lstnew(ft_strdup("ziad"));
// 	tmp1 = ft_lstnew(ft_strdup(" ahansal"));
// 	new = ft_lstnew(ft_strdup(" zineb"));
// 	tmp->next = tmp1;
// 	if (!tmp || !tmp1)
// 		return (1);
// 	t_list *head = tmp;
// 	// while (head)
// 	// {
// 	// 	printf("%s", (char *)head->content);
// 	// 	head = head->next;
// 	// }
// 	ft_lstadd_back(&tmp, new);
// 	head = tmp;
// 	while(head)
// 	{
// 		printf("%s", (char *)head->content);
// 		head = head->next;
// 	}
// }
// ******************************************************
// int main()
// {
// 	t_list *tmp;
// 	t_list *tmp1;
// 	t_list *new;

// 	char t[] = "ziad";
// 	char t1[] = " ahansal";

// 	tmp = ft_lstnew(t);
// 	tmp1 = ft_lstnew(t1);
// 	new = ft_lstnew(ft_strdup("zineb "));
// 	if (!tmp || !tmp1)
// 		return (1);
// 	tmp->next = tmp1;
// 	tmp1->next = NULL;
// 	// while(ter)
// 	// {
// 	// 	printf("%s", (char *)ter->content);
// 	// 	ter = ter->next;
// 	// }
// 	ft_lstadd_front(&tmp, new);
// 	t_list *ter = tmp;
// 	while(ter)
// 	{
// 		printf("%s", (char *)ter->content);
// 		ter = ter->next;
// 	}
// 	// printf("%s\n", (char *)new->content);
// }
// ***************************************************
// void del(void *c)
// {
// 	free(c);
// }
// int main()
// {
// 	t_list *tmp;
// 	t_list *tmp1;
// 	char t[] = "ziad";
// 	char t1[] = " ahansal";
// 	tmp = ft_lstnew(t);
// 	tmp1 = ft_lstnew(t1);
// 	tmp->next = tmp1;
// 	tmp1->next = NULL;
// 	ft_lstclear(&tmp, del);
// }
// ************************************************
// void del(void *c)
// {
// 	free(c);
// }
// int main()
// {
// 	t_list *tmp;
// 	char t[] = "zaid ahansal";
// 	tmp = ft_lstnew(t);
// 	printf("%s", (char *)tmp->content);
// 	ft_lstdelone(tmp ,del);
// 	tmp = NULL;
// }
// int main()
// {
// 	char src[] = "ziad ahansal zed";
// 	char **tab = ft_split(src, ' ');
	// int i = 0;
	// while (tab[i])
	// {
	// 	printf("%s\n", tab[i]);
	// 	free(tab[i]);
	// 	i++;
	// }
	// free(tab);
// 	char **tmp = tab;
// 	while (*tab)
// 	{
// 		printf("%s\n", *tab);
// 		free(*tab);
// 		tab++;
// 	}
// 	free(tmp);
// }
// void fer(unsigned int i, char *c)
// 	{
// 		if(*c >= 'a' && *c <= 'z')
// 		{
// 			*c-=32;
// 		}
// 	}
// int main()
// {
// 	char str[] = "ziad ahansal";
// 	ft_striteri(str, fer);	
// 	printf("%s", str);
// }
// char f(unsigned int i, char c)
// {
// 	if(c >= 'a' && c<= 'z')
// 		c-= 32;
// 	return (c);
// }
// int main()
// {
// 	char strp[] = "ziad ahansal";
// 	char *tab = ft_strmapi(strp, &f);
// 	printf("%s", tab);
// }