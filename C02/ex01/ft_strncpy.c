#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i=0;
    while (src[i]!='\0' && i<(int)n)
    {
        dest[i]=src[i];
        i++;
    }
    while(i<(int)n)
    {
    dest[i]='\0';
    i++;
    }
    return dest;
}
