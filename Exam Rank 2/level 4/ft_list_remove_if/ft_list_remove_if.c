/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:57:28 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 14:41:05 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*previous;
	t_list	*to_free;

	current = *begin_list;
	previous = NULL;
	while (current != NULL)
	{
		if (cmp(data_ref, current->data))
		{
			if (previous == NULL)
				*begin_list = current->next;
			else
				previous->next = current->next;
			free (current->data);
			to_free = current;
			current = current->next;
			free(to_free);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
