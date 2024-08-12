#include <stdbool.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    i=0;
    while (src[i]!='\0' && i< ((int)size-1))
    {
        dest[i]=src[i];
        i++;
    }
    return i;
}