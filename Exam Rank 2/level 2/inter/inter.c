/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:45:31 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 15:25:01 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while(j < i)
		{
			if (s1[j] == s1[i])
			{
				j = -1;
				break;
			}
			j++;
		}
		w = 0;
		while (s2[w] != '\0' && j != -1)
		{
			if (s1[i] == s2[w])
			{
				ft_putchar(s1[i]);
				break ;
			}
			w++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
