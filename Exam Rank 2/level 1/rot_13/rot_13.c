/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:32:52 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/24 22:50:03 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char *str)
{
	while (*str)
	{
		if((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
			ft_putchar(*str + 13);
		else if((*str > 'M' && *str <= 'Z') || (*str > 'm' && *str <= 'z'))
			ft_putchar(*str - 13);
		else
			ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return 0;
}
