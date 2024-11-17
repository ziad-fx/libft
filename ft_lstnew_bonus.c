/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:02 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/16 20:48:02 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *element;
    
    element = malloc(sizeof(t_list));
    if(!element)
        return (NULL);
    element->content = content;
    element->next = NULL;
    return(element);
}
int main()
{
    t_list *tmp;
    
    int a = 5;
    tmp = ft_lstnew(&a);
    printf("%d", *(int *)tmp->content);
    // node: content 5
    
}    