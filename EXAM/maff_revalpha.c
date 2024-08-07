#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
int main()
{
    char up;
    char down;

    down = 'z';
    up = 'Y';

    while(down >= 'a' && up >= 'A')
    {
        ft_putchar(down);
        ft_putchar(up);
        down -= 2;
        up -=2;
    }
    ft_putchar('\n');
    return 0;
}