/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:07:13 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/25 17:43:35 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
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
	return (count);
}

void	camel_to_snake(char *camel)
{
	char	*snake;
	int		len;
	int		i;

	len = ft_strlen(camel);
	snake = malloc(sizeof(char) * len + 1);
	i = 0;
	while (*camel)
	{
		if (*camel >= 'A' && *camel <= 'Z')
		{
			snake[i] = '_';
			i++;
			snake[i] = *camel + 32;
		}
		else
			snake[i] = *camel;
		camel++;
		i++;
	}
	snake[i] = '\0';
	ft_putstr(snake);
	free(snake);
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
