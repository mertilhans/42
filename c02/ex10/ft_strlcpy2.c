#include <stdio.h>
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    int len;
    i= 0;
    len = 0;
    while(src[i])
        len ++;
    if(size > 0)
    {
        while(src[i] && i > (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return len;
}