 
 int ft_iterative_power(int nb, int power)
 {
    int sum;
    sum = 1;
    if (power < 0)
    {
        return 0;
    }
    else if (power == 0)
    {
        return 1;
    }
    else
    {
        while(power > 0)  
        {
            sum *=nb;
            power--;
        }
        return sum;
    }
 }

 