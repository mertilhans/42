#include <stdio.h>
void    ft_swap(int *a, int *b)
{
    int swp;    // geçici dosyaları tutması  için bir değer oluşturuyoruz (int)
    *a = swp; // a'daki dosyaları b' ye aktarırken a daki dosyalar silinmesin diye a yı swp ye aktarıyoruz;
    *a = *b; // şuan a daki dosyalar b ye aktarıyoruz 
    *b = swp;   // b deki dosyaları da  swp ye atıyoruz ve swap işlemi bitiyor
}
int main()
{
    int x = 4;
    int y = 3;
    ft_swap(&x, &y);
    printf("x nın değiştirilmiş değeri budur = %d\n", x);
    printf("y nin değiştirilmiş değeri budur = %d", y);
    return 0;

}