/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:15:09 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 12:37:20 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return 0;
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void	fprime(char *str)
{
	int	n;
	int	prime;

	n = atoi(str);
	prime = 1;
	if (n == 1)
		printf("1");
	while (n != 1)
	{
		if (is_prime(prime))
		{
			while (n % prime == 0)
			{
				printf("%d", prime);
				if (n / prime != 1)
					printf("*");
				n = n / prime;
			}
		}
		prime++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		fprime(argv[1]);
	}
	printf("\n");
	return 0;
}
