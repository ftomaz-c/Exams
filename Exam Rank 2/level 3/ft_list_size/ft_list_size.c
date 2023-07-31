/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:49:41 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 12:54:15 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		count;

	count = 0;
	current = begin_list;
	while (current != NULL)
	{
		count++;
		current = current ->next;
	}
	return (count);
}
