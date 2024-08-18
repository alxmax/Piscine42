 
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
