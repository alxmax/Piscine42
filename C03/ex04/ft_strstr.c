char *ft_strstr(char *str, char *to_find)
{
    unsigned int i;
    unsigned int j;
    i=0;
    j=0;
    if(!to_find[j]){
        return &str[i];
    }
    while(str[i])
    {   
        if(to_find[j]==str[i])
        {
            while(to_find[j])
            {
                if(str[i+j]!=to_find[j])
                {
                    break;
                }
                j++;
            }
            if(to_find[j] == '\0')
            {
                return &str[i];
            }
        }
        i++;
    }
    return 0;
}