#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i,j;
    j = 0;
    i = 0;
    while (dest[j])
    {
        j++;
    }
    while (i < nb && (src[i]))
    {   
        dest[j+i]=src[i];
        i++;
    }
    dest[j+i]='\0';
    return dest;
}