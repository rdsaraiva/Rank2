#include <stdio.h>

int main(int ac, char **av)
{
    int n;
    int d;

    if (ac != 2)
        return (printf("\n"), 0);
    n = atoi(av[1]);
    d = 2;
    if (n == 1)
        return (printf("1\n"), 0);
    while (n > 1)
    {
        if (n % d == 0)
        {
            printf("%d", d);
            n /= d;
            if (n > 1)
                printf("*");
        }
        else
            d++;
    }
    printf("\n");
    return (0);
}