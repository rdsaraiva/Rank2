#include <stdlib.h>

static int len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        len++;
        n = -n;
    }
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    long    n;
    char    *s;
    int     i;

    n = nbr;
    i = len(n);
    s = malloc(sizeof(char) * (i + 1));
    if (!s)
        return (NULL);
    s[i] = '\0';
    if (n < 0)
    {
        n = -n;
        s[0] = '-';
    }
    if (n == 0)
        s[0] = '0';
    while (n != 0)
    {
        i--;
        s[i] = '0' + (n % 10);
        n /= 10;
    }
    return (s);
}
