#include <stdbool.h>
int ft_str_is_lowercase(char *str)
{
    int i;
    i=0;
    bool flag;
    flag=false;
    while (str[i]!='\0')
    {
        if(str[i] > 96 && str[i] < 123)
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
