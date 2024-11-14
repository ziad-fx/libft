/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyahansa <zyahansa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:51:07 by zyahansa          #+#    #+#             */
/*   Updated: 2024/11/12 16:33:04 by zyahansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_cheker(int c)
{
	if(c < 0)
		return (0);
	return (-1);
}
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long	res;
	long checker;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		checker = res;
		res = res * 10 + (str[i] - '0');
		if(res/ 10 != checker)
			return (ft_cheker(sign));
		i++;
	}
	return (sign * res);
}

int main()
{
//     printf("%d\n",ft_atoi("255"));//int max & min
//     printf("%d\n\n",atoi("2147483647"));

//     printf("%d\n",ft_atoi("-2147483648"));
//     printf("%d\n\n",atoi("-2147483648"));

//     printf("%d\n",ft_atoi("2147483648"));//int max & min (overflow)
//     printf("%d\n\n",atoi("2147483648"));

//     printf("%d\n",ft_atoi("-2147483649"));
//     printf("%d\n\n",atoi("-2147483649"));

		// printf("%d\n",ft_atoi("922337203685477586"));// long max & min
		// printf("%d\n\n",atoi("922337203685477586"));

//     printf("%d\n",ft_atoi("-9223372036854775808"));
//     printf("%d\n\n",atoi("-9223372036854775808"));

//     printf("%d\n",ft_atoi("9223372036854775808"));//long max & min (overflow)
//     printf("%d\n\n",atoi("9223372036854775808"));

//     printf("%d\n",ft_atoi("-9223372036854775809"));
//     printf("%d\n\n",atoi("-9223372036854775809"));

//     printf("%d\n",ft_atoi("18446744073709551615"));//size_t max 
//     printf("%d\n\n",atoi("18446744073709551615"));
    
//     printf("%d\n",ft_atoi("18446744073709551616"));//size_t max (overflow)
//     printf("%d\n\n",atoi("18446744073709551616"));

//     printf("%d\n",ft_atoi("1844674407370955161574177"));//somethink strange 
//     printf("%d\n\n",atoi("1844674407370955161574177"));

//     printf("%d\n",ft_atoi("43"));//somethink strange 
//     printf("%d\n\n",atoi("43"));
 }
