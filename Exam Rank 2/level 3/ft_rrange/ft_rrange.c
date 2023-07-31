/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:57:41 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 16:17:43 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*n;
	int	len;
	int	i;

	if (start < end)
		len = end - start + 1;
	else if (start > end)
		len = start - end + 1;
	else
		len = 1;
	n = malloc (sizeof(int) * len);
	if (!n)
		return 0;
	i = 0;
	while (i < len)
	{
		n[i] = end;
		if (start < end)
			end--;
		else
			end++;
		i++;
	}
	return (n);
}

/* #include <stdio.h>

int	main()
{
	int	*n;
	int	i;
	int	start;
	int	end;
	int	len;

	start = 0;
	end = -3;
	if (start < end)
		len = end - start + 1;
	else if (start > end)
		len = start - end + 1;
	else
		len = 1;
	n = ft_rrange(start, end);
	i = 0;
	while (i < len)
	{
		printf("%i\n", n[i]);
		i++;
	}
} */
