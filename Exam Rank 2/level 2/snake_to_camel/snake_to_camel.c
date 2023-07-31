/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:31:26 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/30 17:23:13 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

size_t	ft_strlen(char *str)
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

void	snake_to_camel(char *str)
{
	int		len;
	char	*new_str;
	int		i;

	len = ft_strlen(str);
	new_str = malloc (sizeof(char) * len);
	if (!new_str)
		return ;
	i = 0;
	while (*str)
	{
		if (*str == '_')
			new_str[i] = *(++str) - 32;
		else
			new_str[i] = *str;
		str++;
		i++;
	}
	new_str[i] = '\0';
	ft_putstr(new_str);
	free(new_str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		snake_to_camel(argv[1]);
	}
	write (1, "\n", 1);
}
