/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:44:05 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/30 16:18:44 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

size_t	ft_strlen(char *str)
{
	size_t count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

void	rev_wstr(char *str)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	w;
	size_t	w_end;
	char	*new_str;

	len = ft_strlen(str);
	new_str = malloc(sizeof(char) * len + 1);
	if (!new_str)
		return ;
	i = len;
	w = 0;
	while (i != 0)
	{
		if (i == len)
			w_end = i;
		else
			w_end = i + 1;
		while ((str[i] != ' ' && str[i] != '\t') && i != 0)
			i--;
		if (str[i] == ' ' || str[i] == '\t' || i == 0)
		{
			if (i != 0)
			{
				j = i + 1;
				while ((str[j] != ' ' && str[j] != '\t') && str[j] != str[w_end])
					new_str[w++] = str[j++];
				new_str[w++] = str[i--];
			}
			else
			{
				j = 0;
				while (str[j] != ' ' && str[j] != '\t')
					new_str[w++] = str[j++];
				break ;
			}
		}
	}
	new_str[w] = '\0';
	ft_putstr(new_str);
	free(new_str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write (1, "\n", 1);
}
