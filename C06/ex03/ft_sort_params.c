#include <unistd.h>

int main(int argc, char **args)
{
    int i,j;
    i=1;
    char temp;
    if ( argc < 2)
    {
        write(1, "No arguments provided\n", 23);
        return 1;
    }
    while (args[i-1])
    {
        if(args[i][0] > args[i+1][0])
        {
            temp = args[i][0];
            args[i][0] = args[i+1][0];
            args[i+1][0] = temp;            
        }
        i++;
    }
    i=1;
    while (args[i])
    {
        j=0;
        while (args[i][j])
        {
            write(1, &args[i][j], 1);
            j++;
        }
        i++;
        write(1,"\n",1);
    }
}