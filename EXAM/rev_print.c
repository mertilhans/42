#include <unistd.h>
#include <string.h>
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        char *str = argv[1];
        int len = strlen(str);

        //Diziyi sondan başa doğru okuyarak tersini yazdır
        for (int i = len - 1; i>= 0; i--)
        {
            write(1,&str[i],1);

        }
    }
    write(1,"\n",1);
    return 0;
}