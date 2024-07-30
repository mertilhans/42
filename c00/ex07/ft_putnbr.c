#include <unistd.h>
void ft_putchar(char c)
{ // char türünde bir karakter alıyoruz ve bunu stdout yazdırmak için write fonksiyonunu kullanıyoruz 
    write(1, &c, 1); // write fonksiyonu 1 numaralı dosya tanımlayıcısına stdout &c adresindeki 1 bytelik veriyi yazar bir karakteri ekrana yazdırır 
}
void    ft_putnbr(int nb)
{
    if (nb < 0) // eğer nb negatif ise
    {
            ft_putchar('-'); // negatif işaret yazdrır ekrana 
            nb *= -1; // nb'nin pozitif değeri alınır bu işlem sayının negatif olduğunda pozitif formunu almak için yapılır 
    }
    if (nb == -2147483648 ) //bu durum int türünin minimum değeridir (negatif) İNT_MİN bu değer doğrudan write fonksiyonunu kullanılarak ekrana yazdırılır 
    {
            write(1,"2147483648", 12); // bu durum doğrudan ekrana yazdırılır 2142852 stringi 12 byte olarak (dahil olmak üzere sonlandırıcı '\0' ) olmadan yazdırılır bu sayı--
            // nın negatif sınırıdır ve pozitif sınırının işaretsiz değeri 2147483648 i temsil eder.
            return ;
    }
    if (nb >= 10) // eğer nb 10 veya daha büyük ise 
    {
        ft_putnbr(nb / 10); // nb nin onlar basamağındaki rakamı ekrana yazdırmak için fut_putnbr fonksiyonu tekrar çağrılır bu sayının birler basamağından önceki tüm basamakların yazıdırlması
        // için gereklidir 
        nb %= 10; // nb nin birler basamağındaki rakamı alınır ( nb yi 10 a böldükten sonra kalan)
    }
    ft_putchar(nb + 48); // nb nin birler basamağındaki rakamı, karaktere dönüştürülüp nb + 48 ft_putchar fonksiyonu ile ekrana yazdırılır 'nb' nin birler basamağındaki rakamı '48'
    // ASCII kodundan başlayarak '0' karakteridir
    // bu şekilde ft_putnbr fonksiyonu int türünde bir sayıyı negatif işaret dahil olmak üzere doğru şekilde ekrana yazdırılmak için kullanılır.Negatif sayılar için işaret '-'
    // ayrıca ekrana yazdırılır ve özel durum olarak -214"" değeri doğran yazdırılır "
}
int main()
{
    int nbr = 42;
    ft_putnbr(nbr);
    return 0;
}