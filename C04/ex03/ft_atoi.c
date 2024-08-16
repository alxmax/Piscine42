#include <unistd.h>

int ft_atoi(char *str)
{   
    int i;
    i=0;
    int val;
    val=0;
    int neg;
    neg = 0;
 
    while(str[i])
    {
        //printf("char %c \n",str[i]); DEBUG 
        if(str[i] >= '0' && str[i] <= '9')
        {   
            val *=10;
            val+=(str[i]-'0');

            //printf("digit :%d \n",val); DEBUG
        }
        else if(str[i] == '-')
        {
            neg++;
        }
        else if (str[i] > '9' || (val>0 && str[i] == ' '))
        {
            break;
        }
    i++;
    }
    if(neg%2==1)
    {
        val=val*-1;       
    }
    return val;
}
