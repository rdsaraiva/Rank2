#include <unistd.h>

int main(int ac, char **av)
{
    int     i;
    int     in_word;
    char    *s;

    if (ac != 2)
        return (write (1, "\n", 1), 0);
    i = 0;
    in_word = 0;
    s = av[1];
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t')
        {
            if (in_word == 1)
                write (1, " ", 1);
            while (s[i] && s[i] != ' ' && s[i] != '\t')
            {
                write (1, &s[i], 1);
                i++;
            }
            in_word = 1;
        }
        else
            i++;
    }
    write (1, "\n", 1);
    return (0);
}