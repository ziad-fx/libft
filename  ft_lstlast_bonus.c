/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_lstlast_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:23:43 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/15 11:26:06 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 t_list *ft_lstlast(t_list *lst)
 {
    if (!lst)
        return (NULL);
    t_list *tmp;
    tmp = lst;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    return (tmp);
 }