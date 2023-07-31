/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:00:58 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/24 22:29:09 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void fill(char **tab, int x, int y, char old_char, t_point size)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != old_char)
		return;
	else
	{
		tab[y][x] = 'F';
		fill(tab, x - 1, y, old_char, size);
		fill(tab, x + 1, y, old_char, size);
		fill(tab, x, y - 1, old_char, size);
		fill(tab, x, y + 1, old_char, size);
	}
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char old_char;

	old_char = tab[begin.y][begin.x];
	fill(tab, begin.x, begin.y, old_char, size);
}
