#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
char i;
while(src[i])
{
    src[i] = dest[i];
    i++; 
}
dest[i] = '\0'; // kopyalama işlemi bittikten döngüden ıktıktan sonra desti 0 a eşitliyoruz
return dest; // dest değerini ekrana yazdırıyoruz 
}
int main()
{
char src[] = "naber"; // eğer hedef dizgi, kaynak dizgiyi tutabilecek kadar büyük değilse,bellek taşması meydana gelebilir bu da progrramın beklenmedik şekilde davranmasına çökmesinde neden olur
char dest[] = "snne";
printf("%s, %s",ft_strcpy(dest, src));
return 0;
}