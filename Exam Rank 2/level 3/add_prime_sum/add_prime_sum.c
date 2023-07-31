/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:11:23 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/25 13:40:40 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + 48);
}

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

int add_prime_number(int n)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;

	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	sum;

	sum = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + (*str - '0');
		str++;
	}
	return (sign * sum);
}

int main(int argc, char **argv)
{
	int	n;
	int	result;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		result = add_prime_number(n);
		ft_putnbr(result);
	}
	write(1, "\n", 1);
	return 0;
}
