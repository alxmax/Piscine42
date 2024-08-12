char *ft_strcat(char *dest, char *src)
{
    unsigned int i,j;
    j = 0;
    i = 0;
    while (dest[j])
    {
        j++;
    }
    while (src[i])
    {
        dest[j+i]=src[i];
        i++;
    }
    return dest;
}