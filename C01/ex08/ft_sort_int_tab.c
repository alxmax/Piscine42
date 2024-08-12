#include <unistd.h>

void swap(int *a, int *b);
void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void ft_sort_int_tab(int *tab, int size)
{  
    int i;
    int j;
    i=0;
    j=1;
    while (i<size-1)
    {
        while (j<size)
        {
        if(tab[j]<tab[i])
        {
            swap(&tab[i],&tab[j]);
        }
        j++;
        }
        i++;
        j=i+1;
    }

}
