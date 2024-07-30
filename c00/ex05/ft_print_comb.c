#include <unistd.h>
void    ft_print_comb(void)
{
    char a;
    char b;
    char c;
    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while ( b <= '8')
        {
            c = b + 1;
            while ( c <= '9')
            {
                write (1, &a, 1);
                write(1, &b, 1);
                write (1, &c, 1);
                if(!(a == '7' && b == '8' && c == '9')) // başında ki '!' (mantıksal değil operatörü) koşulun tersini kontrol etmek için kullanılmıştır bu ifade 'a' nın 7 
                // b nin8 ve c nin 9 olduğu durumu kontrol eder ve bu durum true is if bloğuna girer ancak '!' operatörü ile bu koşulun tersini kontrol ediyoruz yani 
                // a nın 7 b nin 8 ve c nin 9 olmadığı durumu ifade eder
                // eğer a 7 b 8 ve c 9 ise if bloğu çalışmaz (bu durumda virgül ve boşluk yazılmaz.)
                //eğer a 7 b 8 c 9 değilse if bloğu çalışır (bu durumda virgül ve boşluk yazılır)
                // bu if ifadesi, virgül ve boşlukları en son kombinasyonunun sonuna eklememek için kullanılmıştır yani yani 789 kombinasyonunun sonunda virgül ve boşluk eklenmemesi için
                // bu şekilde de kullanabiliriz if (a != '7' || b!= '8) gibi de kullanabiliriz bu durumdada aynı mantık geçerlidir 
                    write(1,", ",2);
                c++;
            }
            b++;
        }
        a++;
    }
    

}
int main()
{
    ft_print_comb();
    return 0;
}