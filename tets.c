#include "libft.h"

// ZIAD AHnsakJJ hhHJGHJ
int main()
{
    int i = 0;
    char *tmp = "ZIAD   ahnsal  hhHJGHJ";
    char t[30];
    while(tmp[i])
    {
        t[i] = tmp[i];
        i++;
    }
    i = 0;
    while (t[i])
    {
        if(t[i] == '\t')
            t[i] = ' ';
        i++;
    }
    printf("%s", t);
    
    // i = 0;
    // while(t[i])
    // {
    //     // printf("%d\n", i);
    //     int c = ft_tolower(t[i]);
    //     printf("%c", c);
    //     i++;
    // }
}