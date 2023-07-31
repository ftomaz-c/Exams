/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:52:21 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/24 23:09:34 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return 0;
	while (n > 1)
	{
		if (n % 2 != 0)
			return 0;
		n /= 2;
	}
	return 1;
}

/* int main ()
{
	printf("%d", is_power_of_2(6));
	write(1, "\n" , 1);
	return 0;
} */
