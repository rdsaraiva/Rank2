#include <unistd.h>

int	main(int argc, char **argv)
{
	int	checked[256] = {0};
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!checked[(unsigned char)argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				checked[(unsigned char)argv[1][i]] = 1;
			}
			i++;
		}	
		i = 0;
		while (argv[2][i])
		{
			if (!checked[(unsigned char)argv[2][i]])
			{
				write (1, &argv[2][i], 1);
				checked[(unsigned char)argv[2][i]] = 1;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
