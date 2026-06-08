int		ft_atoi_base(const char *str, int str_base)
{
    int digit;
    int result;
    int sign;

    sign = 1;
    result = 0;
    if (*str == '-')
    {
        sign = -sign;
        str++;
    }
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            digit = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            digit = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            digit = *str - 'A' + 10;
        else
            break ;
        if (digit >= str_base)
            break ;
        result = result * str_base + digit;
        str++;
    }
    return (sign * result);
}