#include <unistd.h>
void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1); // if yerine while kullanırsak n pozitif veya 0 olduüu sürece devam eder n değeri değişmeden kaldığı için sonsuz döngü oluiur 
    }
    else 
    {
        write(1, "N", 1);
    }
}
int main()
{
    int n = 0;
    ft_is_negative(n);
    return 0;
}