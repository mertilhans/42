#include <stdio.h>
#include <unistd.h>
int     ft_str_is_alpha(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || (str[i] >= 'a' && str[i] <= 'z'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;

}
int main()
{
    char str[] = "";
    printf("%d",ft_str_is_alpha(str));
    return 0;
}