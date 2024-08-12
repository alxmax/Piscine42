#include <unistd.h>

void ft_print_comb2(void)
{
    char c[7];
    char a;
    a='0';
    c[0]=a;
    c[1]=a;
    c[2]=' ';
    c[3]=a;
    c[4]='1';
    c[5]=',';
    c[6]=' ';
    int i;
    while(c[0]<'9' || c[1] <='8')
    { 
    i=0;
    while(i<7)
    {   
        write(1,&c[i],1);
        i++;
        if(i==5 && c[0]=='9' && c[1] =='8')
        {
        i=7;
        }
    }
    c[4]++; 
    if(c[4]>'9' && c[3]>='9')
    {   
        c[1]++;
        c[3]=c[0];  
        c[4]=c[1];
        c[4]++;
    }
    if(c[4]>'9')
    {   c[3]++;
        c[4]=a;
    }
    if(c[1]>'9')
    { 
        c[0]++;
        c[1]=a;
        c[3]=c[0];
        c[4]=c[1];
        c[4]++;
    }
    }
    
}
