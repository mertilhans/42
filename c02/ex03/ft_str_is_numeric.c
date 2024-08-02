#include <stdio.h>
int     ft_str_is_numeric(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(!(str[i] >= 48 && str[i] <= 57)) // ! operatörü koşulun tersini alır eğer koşul doğruysa ! operatörü yanlış yapar eğer koşul yanlışsa ! operatörü doğru yapar
        {
            return 0;
        }
        i++;
    }
    return (1);
       
}
int main()
{
    char str[] = " ";
    printf("%d",ft_str_is_numeric(str));
    return 0;
}