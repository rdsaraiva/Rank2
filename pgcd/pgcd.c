#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
    int tmp;

    tmp = 0;
    while (b)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return (a);
}

int main(int ac, char **av)
{
    if (ac == 3)
        printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
    else
        printf("\n");
    return (0);
}