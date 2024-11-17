#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>



int main()
{
	// int a = 2147483647;
	// printf("%d", a +  21474 );
	size_t c = write(0, "aav", 3);
	printf("\n");
	printf("%zu", c);
}
// int main()
// {
// 	char src[] = "ziad ahansal zed";
// 	char **tab = ft_split(src, ' ');
	// int i = 0;
	// while (tab[i])
	// {
	// 	printf("%s\n", tab[i]);
	// 	free(tab[i]);
	// 	i++;
	// }
	// free(tab);
// 	char **tmp = tab;
// 	while (*tab)
// 	{
// 		printf("%s\n", *tab);
// 		free(*tab);
// 		tab++;
// 	}
// 	free(tmp);

	
// }

// void fer(unsigned int i, char *c)
// 	{
// 		if(*c >= 'a' && *c <= 'z')
// 		{
// 			*c-=32;
// 		}
// 	}
// int main()
// {



// 	char str[] = "ziad ahansal";
// 	ft_striteri(str, fer);	
// 	printf("%s", str);
// }
// char f(unsigned int i, char c)
// {
// 	if(c >= 'a' && c<= 'z')
// 		c-= 32;
// 	return (c);
// }
// int main()
// {
// 	char strp[] = "ziad ahansal";
// 	char *tab = ft_strmapi(strp, &f);
// 	printf("%s", tab);
// }
