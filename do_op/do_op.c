#include <stdio.h>

static int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
    int num1;
    int num2;
    int result;

    result = 0;
    if (ac == 4)
    {
        num1 = ft_atoi(av[1]);
        num2 = ft_atoi(av[3]);

        if (av[2][0] == '+')
            result = num1 + num2;
        else if (av[2][0] == '-')
            result = num1 - num2;
        else if (av[2][0] == '*')
            result = num1 * num2;
        else if (av[2][0] == '/')
            result = num1 / num2;
        else if (av[2][0] == '%')
            result = num1 % num2;

        printf("%d\n", result);
    }
    else
    {
        printf("\n");
    }
    return (0);
}
