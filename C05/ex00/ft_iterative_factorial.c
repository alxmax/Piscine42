 
 int ft_iterative_factorial(int nb)
 {
    int sum;
    sum = 1;
    if (nb < 0)
    {
        return 0;
    }
    while (nb > 0)
    {
        sum *= nb;
        nb--;
    }
    return sum;
 }