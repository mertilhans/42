#include <unistd.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}
int main()
{
    char up;
    char down;

    up = 'A';
    down = 'b';
    while(down <= 'z' && up <= 'Y')
    {
        ft_putchar(up);
        ft_putchar(down);
        up += 2;
        down += 2;
    }
    ft_putchar('\n');
    return 0;
}