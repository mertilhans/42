#include <unistd.h>
void    ft_putchar(char c) // char türünde bir karakteri standart stdout yazdırmak için write fonksiyonu kullanıyoruz ft_putchar fonksyonu c parametresi olarak aldığı karakteri ekrana yazdırır

{
    write(1, &c, 1);
}
char    ft_helper(char c, unsigned n) // rakamları iki haneli şekilde formatlıp ekrana yazdırmak için yardımcı bir işlev olarak kullanılmaktadır 
// ft helper fonksiyonu bir karakter 'c' ve bir tam sayı 'n' parametresi alır ve bu parametrelere göre karakterin onlar ve birler basamağındaki rakamını belirler 
{
    char result;
    result = 0; // başlangıçta 0 a eşitliyoruz 
    if (n == 0) // eğer n parametresi 0 ise (yani onlar basamağı için) result = c / 10 karakterini 10 a böler ve '0' karakterine ekler böylece c karakterinin onlar basamağındaki rakam elde edilir
        result = c / 10 + '0'; // onlar basamağındaki rakamı bul 
    else  // n parametresi 1 ise  (yani birler basamağı için) result = c % 10 + '0' c karakterinin 10 a bölümünden kalanı alır ve 0  karakterine ekler böylece c karakterinin birler basmağındaki sayıyı elde eder
        result = c % 10 + '0'; // birler basamağındaki rakamı bul
    return (result); // result değişkeni, bulunan rakamın karakter temsilini ('0' ile '9' arasında bir karakter) döndürür 
} // aşağıda ft_print_comb fonksiyonunda ft_helper fonkksiyonu a ve b değişkenleri için onlar ve birler basamağındaki rakamları belirlemek için kullanır ft_putchar fonksiyonuyla birlikte
// kullanılarak her rakamın ekrana yazdırılması sağlanır son olarak if(!a == 98 ve b = 99) koşuluyla virgül ve boşluk eklenirken son kombinasyonun sonunda virgül ve boşluk eklenmemesi sağlanır 
// bu şekilde ft_helper fonksiyonu karmaşık işlemleri basit ve tekrar kullanibilir bir şekilde yapılandırmak için kullanılmaktadır.
void    ft_print_comb2(void)
{
    char a;
    char b;
    
    a = 0;
    while (a <= 98)
    {

        b = a + 1;
        while (b <= 99)
        {
            ft_putchar(ft_helper(a, 0));
            ft_putchar(ft_helper(a, 1));
            ft_putchar(' ');
            ft_putchar(ft_helper(b, 0));
            ft_putchar(ft_helper(b, 1));
            if (!(a == 98 && b == 99))
            write(1,",", 2);
            b++;
        }
        a++;
    }
} // yukarıda ki fonksiyon 0 ile 99 arasındaki iki haneli tüm kombinasyonları a ve b olarak adlandırılan rakalmar ekrana yazdırır iki iç içe while döngüsü kullanarak tüm kombinasyonları oluşturur 
// ve her kombinasyonun onlar ve birler basamağındaki rakamlarını ft_helper fonksiyonu ile belirler her rakam ve aralarındaki boşluk ' ' ft_putchar fonksiyonu ile ekrana yazdırılır
// son kombinasyonun sonunda virgül ve boşluk eklemez oda if koşuluyla kontrol edilir 
int main()
{
    ft_print_comb2();
    return 0;
}