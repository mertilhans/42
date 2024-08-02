#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int swap; //geçici değişken
    while (i < size / 2) //dizisin ortasına kadar olan elemanları kapsar yani ortasına geldiğimizde mantıken yer değğişmiş olucaklar
    {
        swap = tab[i]; // tab i değerini swap değişkenine atıyoruz
        tab[i] = tab[size - 1 - i]; // dizinin sonundan i elemanını tab[i] ye atıyoruz
        tab[size - 1 - i] = swap; //swapta tutulan tab[i]'nin orjinal değerini dizinin sonundan i ye atıyoruz
        i++; // i değişkeni arttırırak döngüde ilerliyoruz 
    }
}
int main()
{
    int tab[6] = {1 ,2 ,3 , 6 ,7 ,2};
    int size = 6;
printf("%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4], tab[5]);
    ft_rev_int_tab(tab, size);
    printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4], tab[5]);
    return 0;
}