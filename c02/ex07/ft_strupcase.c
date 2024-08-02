#include <stdio.h>
char    *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
         }
        i++;
    }
    return str;
}
int main()
{
    char str[] = "nbr";
    printf("%s",ft_strupcase(str));
    return 0;
}