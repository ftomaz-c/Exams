/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:48:31 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/24 17:30:24 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rstr_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' && str[i + 1] == ' ') ||
			(str[i] >= 'a' && str[i] <= 'z' && str[i + 1] == '\0'))
		{
				ft_putchar(str[i] - 32);
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && str[i + 1] != ' ')
		{
				ft_putchar(str[i] + 32);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i] && i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
