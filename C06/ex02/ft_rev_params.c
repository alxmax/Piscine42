#include <unistd.h>

int main(int argc, char **args)
{
    int i,j;
    i=argc-1;
    if ( argc < 2)
    {
        write(1, "No arguments provided\n", 23);
        return 1;
    }
    while (i > 0)
    {
        j=0;
        while (args[i][j])
        {
            write(1, &args[i][j], 1);
            j++;
        }
        i--;
        write(1,"\n",1);
    }
}