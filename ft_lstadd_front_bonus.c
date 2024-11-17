/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:24 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 21:43:15 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstadd_front(t_list **alst, t_list *new)
{
    // lst: pointer address to the first element of the list
    // new: pointer address of the new element to add to the list
    if(!alst || !new)
        return ;

    new->next = *alst;
    *alst = new;
}
int main()
{
//     t_list *new = ft_lstnew("ziad +");
//     t_list *element = ft_lstnew(" zineb");
//     t_list *element1 = ft_lstnew(" = ❤️");
//     t_list *head = element1;
//     ft_lstadd_front(&head, NULL);
//     ft_lstadd_front(&head, new);
//     while (head != NULL)
//     {
//     printf("%s", head->content);
//        head = head->next; 
//     }

}