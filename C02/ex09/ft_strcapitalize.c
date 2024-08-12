char *ft_strcapitalize(char *str)
{
    int i;
    i=0;
    while (str[i]!='\0')
    {
        if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
        {
        if((str[i-1]==' ' || i==0 || str[i-1]=='-' || str[i-1] == '+') && (str[i] > 96 && str[i] < 123))
        {
        str[i]-=32;   
        }
        else
        {
        if(str[i] > 64 && str[i] < 91 && i!=0)
        {
        str[i]+=32;   
        } 
        }
        }
        i++;
    }
    return str;
}
