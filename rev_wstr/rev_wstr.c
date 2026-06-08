#include <unistd.h>

int len(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int     i;
    int     j;
    int     start;
    char    *s;

    if (ac != 2)
        return (write (1, "\n", 1), 0);
    s = av[1];
    i = len(s) - 1;
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t')
        {
            j = i;
            while (i >= 0 && s[i] != ' ' && s[i] != '\t')
                i--;
            start = i + 1;
            while (start <= j)
            {
                write (1, &s[start], 1);
                start++;
            }
            if (i > 0)
                write (1, " ", 1);
        }
        else
            i--;
    }
    write (1, "\n", 1);
    return (0);
}