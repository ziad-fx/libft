/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:39:50 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/17 21:20:37 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// int main()
// {
// 	int *p = (int *)5;
// 	t_list *new  =  ft_lstnew(p); // 0x15
//     // 1 2 
//     t_list *tmp;
//     t_list *tmp1;
//     // char *p = ft_strdup("1");
//     tmp = ft_lstnew(ft_strdup("1"));
//     tmp1 = ft_lstnew(ft_strdup("2"));
//     ft_lstadd_back(&new, tmp);
//     ft_lstadd_back(&new, tmp1);
//     t_list *t = tmp;
//     while (t)
//     {
//        printf("%s", t->content);
//        free(content);
//        free(t);
//        t = t->next;
//     }
//     free(tmp);
// }