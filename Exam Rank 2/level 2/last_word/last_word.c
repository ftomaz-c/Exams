/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:55:49 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/24 16:45:11 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ')
		i--;
	while (str[i] != ' ')
		i--;
	i++;
	while (str[i] != ' ' && str[i] != '\0')
		ft_putchar(str[i++]);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	else
		write(1, "\n", 1);
	return 0;
}
