/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:35:43 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/28 17:22:29 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	index;
	unsigned int	j;
	int	temp;
	int	swapped;

	index = 0;
	while (index < size)
	{
		swapped = 0;
		j = 0;
		while (j < size - 1 - index)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break;
		index++;
	}
}

/* #include <stdio.h>

int main ()
{
	int	tab[] = {3, 2, 4, 1, 7, 4123, 54, 123, 5, 0};
	int size = 10;
	int i;

	sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i\n", tab[i]);
		i++;
	}
} */
