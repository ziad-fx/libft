#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>


int main()
{
	printf(" mine = [%d] ; sys [%d] \n ", ft_atoi("0"),atoi("0"));
	printf(" mine  = [%d ; sys [%d] ]\n", ft_atoi("-100000000"),atoi("-100000000"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("18446744073709551615UL"),atoi("18446744073709551615UL"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("4294967295U"),atoi("4294967295U"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("4294967296U"),atoi("4294967296U"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("-4294967295U"),atoi("-4294967295U"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("AboutAboutAboutAboutAboutAboutAboutAboutAboutAboutAbout"),atoi("AboutAboutAboutAboutAboutAboutAboutAboutAboutAboutAbout"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi(""),atoi(""));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("\0\0\0\0\0\0\0"),atoi("\0\0\0\0\0\0\0"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("\012313"),atoi("\012313"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("--11"),atoi("--11"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("++11"),atoi("++11"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("+-14"),atoi("+-14"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("-+14"),atoi("--14"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("-18446744073709551616"),atoi("-18446744073709551616"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("18446744073709551615"),atoi("18446744073709551615"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("-1844674407370955161518446744073709551615"),atoi("-1844674407370955161518446744073709551615"));
	printf(" mine = [%d] ; sys [%d] \n", ft_atoi("18446744073709551614"),atoi("18446744073709551614"));
	
}