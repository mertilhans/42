#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
// div ve modun * olarak tanımlanmasının nedeni bu fonksiyonun iki farklı sonucu
// dışarıya döndürmesini sağlamaktır.
// int *div ve int *mod bu parametreler int türünde birer pointerdır fonksiyon
// içinde bu pointerlar kullanarak işlenen sonuçlar fonksiyon dışına iletilir.
{
   if (b != 0) // eğer b parametresinin değeri 0 a eşit değilse diyoruz 
   {
    *div = a / b; // bu kod satırları div ve mod pointerlarının işaret ettiği bellek adreslerine bölme ve mod alma işlemlerinin sonuçlarını yazar 
    // yani bu pointerlar aracılığıyla dışarıya veri gönderilir
    *mod = a % b;
    // Neden pointer kullanılır Birden fazla sonuç döndürmek ve Bellek verimliliği için
    // pointer kullanmazsak fonksiyonun sonunda bu değişkenler kaybolur ve fonksiyon dışındaki çağrıcı kod bu değerleri alamaz.

   }
}
int main()
{
int a = 300;
int b = 42;
int *div;
int *mod;
div = &a; // sırasıyla a ve b değişkenlerinin adreslerini atıyoruz
mod = &b; // yani div pointeri a değişkenin adresini işaret ederken mod pointer ı b değişkenin adresini işaret eder
ft_div_mod(a, b, div, mod);
printf("div:%d mod %d", *div, *mod); // *kullanıyoruz çünkü
// pointer ın işaret ettiği adresteki değeri almak istiyoruz işaret ettği bellek adreslerindeki değeri döndürücek
return 0;

}