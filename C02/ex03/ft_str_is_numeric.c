#include <stdbool.h>
int ft_str_is_numeric(char *str)
{
    int i;
    i=0;
    bool flag;
    flag=false;
    while (str[i]!='\0')
    {
        if(str[i] > 47 && str[i] < 58)
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
