#include <unistd.h>
void ft_putstr_non_printable(char *str)
{
    int i;
    i=0;
    while (str[i]!='\0')
    {   write(1, &str[i], 1);
        if(str[i] < 32 && str[i] > 126)
        {
        write(1, &str[i].h, 1);
        }
        i++;
    }

}
