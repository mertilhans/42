#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n) // dest hedef , src kaynak , n kopyalanacak maksimum karakter
{
    unsigned int i; // döngü sayacı i 
    i = 0; // i 0 başlamalı başlatmazsak srci ve desti erişimleri tanımsız davranışa yol açar
    while(src[i] && i < n)  // i değişkenin n den küçük olup olmadığını kontrol eder
    {
        dest[i] = src[i];
        i++;      // her karakter kopyalandığında i değeri artırılır
    }
    while (i < n) // ikinci döngü null karakterle doldurma
    {
        dest[i] = '\0';
        i++;
    }
    return dest; // desti döndürüp yazdırıyoruz 
}
int main()
{
    char src[] = "naber";
    char dest[]= "sssn";
    printf("%s",ft_strncpy(dest, src, 2)); // burda dest ve src sırasına dikkat
    printf("%s\n",ft_strncpy(dest, src, 4));
    printf("%s\n",ft_strncpy(src, dest, 6));
    return 0;
}