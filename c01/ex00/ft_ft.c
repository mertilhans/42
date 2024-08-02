#include <stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;
}
int main()
{
    int n = 0;
    int *nbr = &n;
    ft_ft(nbr);
    printf("%d",n);
    return 0;
}