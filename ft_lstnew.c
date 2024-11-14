/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:50:02 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/12 15:02:48 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *element;
    
    element = malloc(sizeof(t_list));
    // printf("%lu\n", sizeof(element));
    if(!element)
        return (NULL);
    element->content = content;
    element->next = NULL;
    return(element);
}
// int main()
// {
//     t_list *ele = ft_lstnew("zaude");
//     printf("%s", (char *)ele->content);
//     // void *p =  malloc(0);
//     // printf("%p", p);
//     // free(p);
//     // free(content);
// }    