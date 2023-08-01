/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:48:59 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 11:55:14 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc)
	{
		(void)argv[i];
		i++;
	}
	if (i == argc)
		ft_putchar((i - 1) + 48);
	write (1, "\n", 1);
}
