/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:35:14 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 18:14:00 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

int	count_digits(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int				len;
	char			*str;
	int				sign;
	/* unsigned int	n;
 */
	sign = 0;
	if (nbr == INT_MIN)
	{
		str = malloc (sizeof(char) * 12);
		str = "-2147483648";
		return (str);
	}
	len = count_digits(nbr);
	if (nbr < 0)
	{
		nbr *= -1;
		sign = 1;
		len++;
		/* n = nbr; */
	}
	str = malloc (sizeof(char) * len + 1);
	str[len] = '\0';
	while (len > 0)
	{
		len--;
		str[len] = nbr % 10  + 48;
		nbr /= 10;
		if (sign && len == 0)
			str[len] = '-';
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	int		nbr;

	nbr = INT_MIN;
	printf("%s\n", ft_itoa(nbr));
}
