#include <unistd.h>

int main(int argc, char **args)
{

    int i;
    i=0;
    if ( argc > 0)
    {
        while (args[0][i])
        {
            write(1, &args[0][i], 1);
            i++;
        }
        write(1,"\n",1);
    }

    
}