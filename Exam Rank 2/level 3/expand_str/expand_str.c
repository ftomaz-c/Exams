/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:26:49 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 16:34:01 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	expand_str(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (i == 0)
		{
			if (str[j] >= 33 && str[j] <= 126)
			{
				i = j;
				break ;
			}
			j++;
		}
		while (str[j + 1] != '\0')
			j++;
		while (str[j] == ' ' || str[j] == '\t')
			j--;
		while ((str[i] == ' ' || str[i] == '\t') && i <= j)
		{
			i++;
			if (str[i] >= 33 && str[i] <= 126)
				ft_putstr("   ");
		}
		if (i <= j)
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		expand_str(argv[1]);
	}
	else
		write(1, "\n", 1);
}
