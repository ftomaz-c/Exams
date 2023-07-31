/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:49:36 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/25 16:17:07 by ftomaz-c         ###   ########.fr       */
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
	while(*str)
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

void	rostring(char *str)
{
	char	*new_str;
	int		len;
	int		word;
	int		i;
	int		j;
	int		w;

	len = ft_strlen(str);
	new_str = malloc(sizeof(char) * len + 1);
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	j = i;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] > 32 && str[i] < 127)
		{
			new_str[w] = str[i];
			i++;
			w++;
			word = 1;
		}
		if (word)
			new_str[w++] = ' ';
		word = 0;
	}
	while (str[j] != ' ' && str[j] != '\t' && str [j] != '\0')
	{
		new_str[w] = str[j];
		j++;
		w++;
	}
	new_str[w] = '\0';
	ft_putstr(new_str);
	free(new_str);
}

int main (int argc, char** argv)
{
	if(argc > 1)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
