#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swap;
    while(size >= 0)
    {
        i = 0;
        while(i < size -1 )
        {
            if (tab[i] > tab[i + 1])
            {
                swap = tab[i];
                tab[i] = tab[i + 1];
                tab [i +1] = swap;
            }
            i++;
        }
        size--;
    }

}
int main()
{
    int tab[8] = {9,5,4,6,2,4,1,3};
    int size = 8;
    ft_sort_int_tab(tab, size);
    printf("%d,%d,%d,%d,%d,%d,%d,%d",tab[0], tab[1], tab[2], tab[3],tab[4],tab[5], tab[6], tab[7]);
    return 0;
}