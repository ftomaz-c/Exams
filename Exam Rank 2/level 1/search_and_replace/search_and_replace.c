/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:19:38 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/25 16:57:41 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	search_and_replace(char *str, char *search, char *replace)
{
	int	i;
	int j;

	if (search[j + 1])
		return ;
	while (str[i])
	{
		if (str[i] == *search)
			str[i] = *replace;
		i++;
	}
	ft_putstr(str);
}

int	main (int argc, char **argv)
{
	if (argc == 4)
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write (1, "\n", 1);
	return 0;
}
