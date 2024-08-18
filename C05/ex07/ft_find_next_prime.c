  int ft_is_prime(int nb)
 {
        int div;
        div = nb/2;
        if (nb < 2)
        {
            return 0;
        }
        while (div > 1)
        {   
            if(nb%div==0)
            {
                return 0;
            }
            else
            {
                div--;
            }
        }
        return 1;
 }

 int ft_find_next_prime(int nb)
 {
    int flag;
    flag = 0;
    while (flag == 0)
    {
        if (ft_is_prime(nb) == 1)
        {
            flag = 1;
        }
        else
        {
            nb++;
        }
    }
    return nb;
 }
