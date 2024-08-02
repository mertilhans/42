#include <stdio.h>
char    *ft_strlowcase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // str[i] += 32; de yazabiliriz 
        }
        i++;
    }
    return str;
}
char    *ft_strcapitalize(char *str)
{
    int i = 0; // döngü sayacı olucak
    int v = 1; // Satır başını bulmak için kullanıcaz
    ft_strlowcase(str); // ilk baş hepsini küçültüyoruz sonra baş harfleri büyültücez 
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            if (v == 1) // v değişkeni 1 e eşit değilse döngüye gir
                str[i] -= 32; // i indeksindeki harfi büyütüyoruz
                v = 0; // 
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            v = 0; 
        }
        else
        { 
            v = 1;
        }
        i++; 
    }
    return str;
}
int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux";
    printf("%s",ft_strcapitalize(str));
    return 0; 
}