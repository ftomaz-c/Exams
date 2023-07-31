/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:54:27 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 15:56:00 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	x;
	unsigned char	y;

	x = octet & 15;		/* 15 = 00001111 */
	y = octet & 240;	/* 240 = 11110000 */

	x = x >> 4;
	y = y << 4;

	octet = x | y;
	return (octet);
}
