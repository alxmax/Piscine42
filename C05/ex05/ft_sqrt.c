 
 int ft_sqrt(int nb)
 {
    int div;
    div = nb/2;
    if (nb == 1)
    {
        return 1;
    }
    while (div > 0)
    {
        if(nb/div==div)
        {
            return div;
        }
        else
        {
            div--;
        }
    }
    return 0;
 }
