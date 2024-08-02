#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}
int main()
{
    char *c = "Naptinasilgidi";
    printf("%d",ft_strlen(c));
    return 0;
}