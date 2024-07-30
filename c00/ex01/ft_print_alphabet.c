#include <unistd.h> // write kullanmak için POSİX kütüphanesi için
void    ft_print_alphabet(void)
{
    char i;
    i = 97; // ASCII tablosunda 'a' harfinin karşılığı  
    while (i >= 97 && i<= 122)   // eğer 'a' ile 'z' arasındaki karakterler  // burda veya kullanırsak sonsuz döngü olur 
    { 
        write(1, &i, 1); //i nin adresine git ve yazdır
        i++; // bir sonraki karaktere geç
    }   
}
int main()
{
    ft_print_alphabet(); // yukarıdaki fonksiyonu çağır 
    return 0; // programı başarılı bir şekile sonlandır 
}
