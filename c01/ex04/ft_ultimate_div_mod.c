#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int div; // iki tane yerel değişken oluşturuyoruz 
    // işlem sonuçlarını geçiçi olarak saklıyacaklar
    int mod;

    div = *a / *b; // *a ve *b pointerların işaret ettiği bellek adreslerindeki değerleri temsil eder
    // bölme işlemi yapılır ve sonuç div dğeişkenine atanır
    mod = *a % *b;
    *a = div; // *a = div pointerin işaret ettiği adrese,Bölme işleminin sonucu olan div değeri yazılır
    *b = mod;
   // Girdi: a ve b'nin adreslerini içeren pointer'lar.
// İşlem: a ve b'nin değerlerini bölüp kalanı hesaplar. Hesaplanan bölüm ve kalan, a ve b'nin yerini aldığı adreslere yazılır.
// Çıktı: a ve b değişkenlerinin yeni değerleri, bölme ve mod işlemlerinin sonuçlarıdır.
}
int main()
{
    int x;
    int y;
    x = 15;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d   %d",x, y);
    return 0;
}