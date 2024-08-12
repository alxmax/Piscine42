 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i,j;
    j = 0;
    i = 0;
    while (dest[j])
    {
        j++;
    }
    while ((i+j) < size && (src[i]))
    {   
        dest[j+i]=src[i];
        i++;
    }
    dest[j+i]='\0';
    return 0;
}