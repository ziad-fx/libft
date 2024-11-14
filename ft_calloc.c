/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:19:06 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/14 11:14:13 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) // count = 0 + 18446744073709551614 || size = 2 ||||||| count * size = 18446744073709551614
{
	char	*tab;
	
	if (count == 0 || size == 0)
		return (NULL);
	if(count > SIZE_MAX/size) 
        return NULL;
	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}
int main()
{
	// char *tmp = "";
	// size_t len = strlen(tmp);
	// char *tab = (char *)ft_calloc(0, sizeof(char));
	// char *tab1 = (char *)calloc(0, sizeof(char));
	// // if (!tab)
	// // {
	// // 	printf("memory failed\n");
	// // 	return (1);
	// // }

	// // printf("%s\n", strcpy(tab, tmp));
	// printf("%s", strcpy(tab1, tmp));
	
	// printf("allocated\n");
	// free(tab);     
	// int *arr1 = ft_calloc(5, sizeof(int));
    // printf("Test 1 - Normal allocation (5 ints):\n");
    // for (int i = 0; i < 5; i++)
    //     printf("%d ", arr1[i]);  
    // printf("\n\n");
    
    int *arr2 = ft_calloc(-1999,1);
    // printf("Test 2 - Zero count:\n");
    // printf("Pointer is NULL? %s\n", arr2 == NULL ? "Yes" : "No");
	// int *arr22 = calloc(0, sizeof(int));
    printf("Test 2 - Zero count:\n");
    printf("sys sys sys %s\n", arr2 == NULL ? "Yes" : "No");
                                                                             
}