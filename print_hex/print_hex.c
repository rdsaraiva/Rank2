#include <unistd.h>

void    print_hex(unsigned long n)
{
    char    *base;

    base = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write (1, &base[n % 16], 1);
}

char    atolo(char *s)
{
    unsigned long n;

    n = 0;
    while (*s >= '0' && *s <= '9')
    {
        n = n * 10 + (*s - '0');
        s++;
    }
    return (n);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    print_hex(atolo(argv[1]));
    write(1, "\n", 1);
    return (0);
}