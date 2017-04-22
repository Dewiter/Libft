/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 20:53:08 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/22 08:17:47 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static size_t	counter_word(char const *str, char c)
{
	size_t	cpt;
	int		isword;

	cpt = 0;
	isword = 0;
	while (*str)
	{
		if (*str != c && !isword)
		{
			cpt++;
			isword = 1;
		}
		else if (*str == c && isword)
			isword = 0;
		str++;
	}
	return (cpt);
}

static void		split(char **dest, char *str, int counter, char c)
{
	int		i;
	char	*tmp;

	i = 0;
	while (i < counter)
	{
		while (*str == c)
			str++;
		tmp = str;
		while (*str != c)
			str++;
		dest[i] = (char *)malloc(sizeof(char) * (str - tmp));
		if (dest[i])
			ft_strncpy(dest[i], tmp, str - tmp);
		i++;
	}
	dest[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char**dest;
	int counter;

	counter = counter_word(s, c);
	dest = (char **)malloc(sizeof(char *) * (counter + 1));
	if (!dest)
		return (NULL);
	split(dest, (char *)s, counter, c);
	return (dest);
}
