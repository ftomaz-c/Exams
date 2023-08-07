/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:10:36 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/08/01 10:50:02 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swapped;
	t_list	*current;
	t_list	*prev;
	t_list	*temp;

	swapped = 1;
	if (!lst || lst->next == NULL)
		return 0;
	while (swapped)
	{
		swapped = 0;
		current = lst;
		prev = NULL;
		while (current->next != NULL)
		{
			if (((*cmp)(current->data, current->next->data)) > 0)
			{
				if (prev == NULL)
					prev = lst;
				temp = current->next;
				current->next = prev;
				prev->next = temp;
				swapped = 1;
			}
			prev = current;
			current = current->next;
		}
	}
	return(lst);
}
