#include <unistd.h> // POSIX standart kütüphanesinde bulunan write fonksiyonu için 
void ft_putchar(char c)
{
    write(1, &c, 1);       // fonksiyon bu Genellikle standart output için kullanılır  // &c değişkenin bellek adresi ve sonunda 1 byte olduğu için 1 yazdık
} // yukarıda ilk 1 ise standart çıkış istediğimiz için 
// putchar fonksiyonu kendisine verilen 'c' karakterini standart çıkışa yazdırmak için write fonksiyonu kullanılır genellikle karakter çıktıları yazdırmak için kullanılır
int main()  //main fonksiyonu tamamlarken () kullanmamızın nedeni main fonksiyoonun parametre almadığını belirtmektir.
// için e birşey yazmamak yerine void kelimesini kullanabailiriz ancak dilinde parametresiz bir fonksiyon tanımlanırken () kullanımı doğrudur ve void kelimesi opsiyoneldir
{
    char c = 'm';
    ft_putchar(c);
    return 0;
}