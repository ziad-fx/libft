/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:17:43 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 12:01:07 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;
    t_list *suiv;

    tmp = *lst;
    while (tmp)
    {
        suiv = tmp->next;
        del(tmp->content);
        free(tmp);
        tmp = suiv;
    }
    *lst = NULL;
}