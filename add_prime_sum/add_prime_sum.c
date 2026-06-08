#include <unistd.h>

static int is_prime(int n)
{
    int i;
    if (n < 2)
        return (0);
    i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

static int ft_atoi(char *str)
{
    int result;

    result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result);
}

static void put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n / 10);
    write (1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    int     i;
    int     sum;
    long    n;

    if (ac != 2)
    {
        write (1, "0\n", 2);
        return (0);
    }
    i = 2;
    n = ft_atoi(av[1]);
    sum = 0;
    while (i <= n)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    put_nbr(sum);
    write (1, "\n", 1);
    return (0);
}