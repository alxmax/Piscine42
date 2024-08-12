#include <unistd.h>

void ft_putnbr(int nb)
{   
    char a[12];
    int i;
    i=0;
    if (nb==0)
    {
        a[i]=nb +'0';
        write(1,&a[i],1);
    }
    if(nb<0)
    {
        a[0]='-';
        write(1,&a[i],1);
    }
    while(nb!=0)
    {   
        if(nb>0)
        {
            a[i]=(nb%10) + '0';
        }
        else if(nb<0)
        {   
            a[i]=-(nb%10) + '0';
        }
        nb=nb/10;
        i++;
    }
    i--;
    while (a[i] && i >= 0)
    {
        write(1,&a[i],1);
        i--;
    }
}
