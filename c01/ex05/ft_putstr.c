#include <unistd.h>
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main()
{
    char *c = "naberkanzi";
    ft_putstr(c);
    return 0;
}