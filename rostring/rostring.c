#include <unistd.h>

int main(int ac, char **av)
{
    int     i;
    int     first;
    char    *s;
    int     has_rest;

    if (ac < 2)
    {
        write (1, "\n", 1);
        return (0);
    }
    i = 0;
    s = av[1];
    while (s[i] == ' ' ||  s[i] == '\t')
        i++;
    first = i;
    while (s[i] && s[i] != ' ' && s[i] != '\t')
        i++;
    while (s[i] == ' ' ||  s[i] == '\t')
        i++;
    has_rest = s[i] != '\0';
    while (s[i])
    {
        while (s[i] && s[i] != ' ' && s[i] != '\t')
            write (1, &s[i++], 1);
        while (s[i] == ' ' ||  s[i] == '\t')
            i++;
        if (s[i])
            write (1, " ", 1);
    }
    if (has_rest)
        write (1, " ", 1);
    while (s[first] && s[first] != ' ' && s[first] != '\t')
        write (1, &s[first++], 1);
    write (1, "\n", 1);
    return (0);
}