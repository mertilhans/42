#include <unistd.h>
void    ft_print_numbers(void)
{
    int i = 0;
    while (i <= 9)
        {
            char digit = i + '0'; // '0' karakterine i değerini ekleyerek rakamı elde et her döngü adımında i değeri '0' karakterine eklenerek ascii tablosundaki rakam karakteri elde edilir
            write(1, &digit, 1); // rakamı yazdır 
            i++; // i yi arttır               
            // bu fonksiyonda integer değer verdiğimiz için böyle yaptık yoksa direk çar ile yapabilirdik 
        }
}
int main()
{
    ft_print_numbers();
    return 0;
}