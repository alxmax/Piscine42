#include <unistd.h>

void ft_print_comb(void)
{
    char c[5];
    char a;
    a='0';
    c[0]=a;
    c[1]=a+1;
    c[2]=a+2;
    c[3]=',';
    c[4]=' ';
    int i;
    while(c[0]<='7')
    { 
    i=0;
    while(i<5)
    {   
        write(1,&c[i],1);
        i++;
        if(i==3 && c[0]=='7')
        {
            i=5;
        }
    }
    c[2]++;
    if(c[2]>'9')
    {   c[1]++;
        c[2]=c[1];
        c[2]++;
    }
    if(c[1]>'8' && c[2]>'9')
    {   c[0]++;
        c[1]=c[0];
        c[1]++;
        c[2]=c[1];
        c[2]++;
    }
    }
}
