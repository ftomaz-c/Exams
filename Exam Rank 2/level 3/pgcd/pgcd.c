/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:40:34 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/28 18:31:49 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	pgcd(int x, int y)
{
	int	temp;

	while (y != 0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	return (x);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	hcd;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi (argv[2]);
		if (x > y)
			hcd = pgcd(x, y);
		if (x < y)
			hcd = pgcd(y, x);
		printf ("%i", hcd);
	}
	printf("\n");
	return (0);
}
