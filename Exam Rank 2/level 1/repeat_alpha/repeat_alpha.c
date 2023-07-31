/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:21:01 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/30 18:32:53 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			i = *str - 'A' + 1;
		else if (*str >= 'a' && *str <= 'z')
			i = *str - 'a' + 1;
		while (i != 0)
		{
			ft_putchar(*str);
			i--;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write (1, "\n", 1);
}
