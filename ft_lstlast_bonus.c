/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:12:40 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/15 12:17:13 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
        return (NULL);

    t_list *tmp;
    tmp = lst;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    return (tmp);
}