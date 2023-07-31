/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:34:35 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 17:40:53 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*new_str;
	int		i;

	len = ft_strlen(src);
	new_str = malloc (sizeof(char) * len + 1);
	if (!new_str)
		return NULL;
	while (*src)
	{
		new_str[i++] = *src++;
	}
	new_str[i] = '\0';
	return (new_str);
}
