/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:26:23 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/28 17:35:22 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	max;
	int	index;

	index = 0;
	if (len == 0)
		return (0);
	max = tab[0];
	while (index < len)
	{
		if (tab[index] > max)
			max = tab[index];
		index++;
	}
	return (max);
}
