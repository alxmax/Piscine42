#include <stdbool.h>
int ft_str_is_printable(char *str)
{
    int i;
    i=0;
    bool flag;
    flag=false;
    while (str[i]!='\0')
    {
        if(str[i] > 31 && str[i] < 127)
        {
            flag = true;
        }
        else
        {
            return false;
             
        }
        i++;
    }
    return flag;
}
