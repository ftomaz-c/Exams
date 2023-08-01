/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:38:40 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 12:43:44 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return(count);
}

void	rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while(i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	write (1, "\n", 1);
}
