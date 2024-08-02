#include <stdio.h>
int     ft_str_is_lovercase(char *str)
{
   int i = 0;
   while (str[i])
   {
        if(!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return 0;
        }
        i++;
   }
   return 1;
}
int main()
{
    char str[] = "a";
    printf("%d",ft_str_is_lovercase(str));
    return 0;
}