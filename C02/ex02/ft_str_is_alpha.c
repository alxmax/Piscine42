#include <stdbool.h>
int ft_str_is_alpha(char *str)
{
    int i;
    i=0;
    bool flag;
    flag=false;
    while (str[i]!='\0')
    {
        if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
