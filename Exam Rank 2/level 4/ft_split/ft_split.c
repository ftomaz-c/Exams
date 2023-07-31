/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:18:56 by ftomaz-c          #+#    #+#             */
/*   Updated: 2023/07/31 17:03:12 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str != '\0')
			count++;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			str++;
	}
	return (count);
}

int	len_word(char *str, int index)
{
	int	count;

	count = 0;
	while (str[index] != ' ' && str[index] != '\t' && str[index] != '\n'
			&& str[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if(split)
	{
		while(split[i] != NULL)
		{
			free(split[i]);
			i++;
		}
	}
}

char    **ft_split(char *str)
{
	int		word_len;
	int		len;
	int		index;
	char	**split;
	int		i;
	int		j;

	len = count_words(str);
	split = malloc (sizeof(char *) * len + 1);
	if (!split)
		return NULL;
	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
		index++;
	j = 0;
	while (str[index])
	{
		word_len = len_word(str, index);
		split[j] = malloc (sizeof(char) * word_len + 1);
		if (!split[j])
		{
			free_split(split);
			return NULL;
		}
		i = 0;
		while (str[index] != ' ' && str[index] != '\t' && str[index] != '\n'
			&& str[index] != '\0')
		{
			split[j][i] = str[index];
			i++;
			index++;
		}
		split[j][i] = '\0';
		while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
			index++;
		j++;
	}
	split[j] = NULL;
	return (split);
}
