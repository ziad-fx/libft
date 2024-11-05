/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:19:06 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/05 14:30:29 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size) // count = 0 + 18446744073709551614 || size = 2 ||||||| count * size = 18446744073709551614
{
	if (count == 0 || size == 0)
		return (NULL);
	if(count > SIZE_MAX / size)
        return NULL;
	char	*tab;

	tab = malloc(count * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, count * size);
	return (tab);
}

// void f(void)
// {
// 	system("leaks a.out");
// }
// int main()
// {
// 	atexit(f);
// 	char *tmp = "ziad ahansal";
// 	size_t len = strlen(tmp);
// 	char *tab = (char *)ft_calloc(len + 1, sizeof(char));
// 	if (!tab)
// 	{
// 		printf("memory failed\n");
// 		return (1);
// 	}
// 	strcpy(tab, tmp);
// 	printf("allocated\n");
// 	// free(tab);
// }