/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:21:05 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/28 16:30:45 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*seq;
	int	index;
	int	size;

	index = 0;
	if (start < end)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	else if (start == end)
		size = 1;
	seq = malloc(sizeof(int) * size);
	while (start != end)
	{
		seq[index] = start;
		index++;
		if (start < end)
			start++;
		else
			start--;
	}
	seq[index] = end;
	return (seq);
}

/* #include <stdio.h>
int	main()
{
	int	start;
	int	end;
	int	*seq;
	int	i;
	int size;

	start = 0;
	end = -3;
	seq = ft_range(start, end);
	if (!seq)
		return 1;
	if (start < end)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	else if (start == end)
		size = 1;
	printf("With (%i, %i) you will return an array containing ", start, end);
	i = 0;
	while (i < size)
	{
		printf("%i, ", seq[i]);
		i++;
		if (i + 1 == size)
		{
			printf("and %i.\n", seq[i]);
			break ;
		}
	}
	free(seq);
	return (0);
} */
