/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:25:06 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/30 18:01:56 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	hidenp(char *s1, char *s2)
{
	int	i;

	if (*s1 == '\0')
		return (1);
	while (*s1)
	{
		while (s2[i] != '\0')
		{
			if (*s1 == s2[i])
				break ;
			i++;
		}
		if (s2[i] == '\0')
			return(0);
		s1++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (hidenp(argv[1], argv[2]))
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
	write(1, "\n", 1);
}
