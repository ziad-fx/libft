/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:17:02 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/15 12:07:47 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    if(!lst)
        return (0);
    t_list *tmp;
    tmp = lst;
    int len;
    len = 1;
    while (tmp->next != NULL)
    {
        len++;
        tmp = tmp->next;
    }
    return (len);
}