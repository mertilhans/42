#include <stdio.h>
int     ft_str_is_printable(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(!(str[i] >= 32 && str[i] <= 126)) // ascii tablosuna göre yazdırılabilri karakterler aralığı
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char str[] = "ü";
    printf("%d", ft_str_is_printable(str));
    return 0;
}