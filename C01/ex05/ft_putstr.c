#include <unistd.h>

void ft_putstr(char *str)
{   int i;
    i=0;
    int size;
    size = sizeof(str)*32;
    while(i<=size)
    {
    write(1,&str[i],1);
    i++;
    }

}
