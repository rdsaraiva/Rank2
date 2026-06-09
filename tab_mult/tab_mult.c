#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar('0' + n % 10);
}

int	ft_atoi(char *str)
{
	int	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return (n);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	n = ft_atoi(argv[1]);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(n);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(i * n);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
