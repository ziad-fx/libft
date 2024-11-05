/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:48:56 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/04 09:48:57 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t size) {
    size_t i = 0;

    // If size is 0, we consider the strings equal
    if (size == 0) {
        return 0;
    }

    while (i < size - 1 && s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    // Return the difference of the characters or 0 if they are equal
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
// int main() {
//     char *f = "Z";
//     char *j = "Z";

//     printf("%d\n", ft_strncmp(f, j, 1)); // Should print 0 (equal in the first 2 characters)
//     printf("%d\n", strncmp(f, j, 1)); // Should print a positive number (since 'e' > 'j')
//     return 0;
// }