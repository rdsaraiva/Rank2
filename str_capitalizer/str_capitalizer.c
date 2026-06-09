/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-fon <roda-fon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 09:46:47 by roda-fon          #+#    #+#             */
/*   Updated: 2026/06/09 12:31:07 by roda-fon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	capitalize(char *str)
{
    int i;
    int in_word;

    i = 0;
    in_word = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            in_word = 0;
            write (1, &str[i], 1);
        }
        else
        {
            if (!in_word && str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            else if (in_word && str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
            in_word = 1;
            write (1, &str[i], 1);
        }
        i++;
    }
    write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		capitalize(argv[i]);
		i++;
	}
	return (0);
}
