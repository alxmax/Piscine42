#include <unistd.h>

int ft_atoi(char *str)
{   
    int i;
    int len;
    int flag;
    len = 0;
    i=0;
    flag = 1;
    int val;
    val=0;
    while(str[i])
    {   
        if(str[i] > '0' && str[i] <='9')
        {
            flag = 0;
        }
        if(str[i] >= '0' && str[i] <='9' && flag ==0)
        {
            len++;
        }
        i++;
    }
    i=0;
    while(str[i] && i<1)
    {
        if(str[i] > '0' && str[i] <= '9')
        {
        val=(str[i]-'0')*100;
        len--;
        }
    i++;
    }
    return val;
}
