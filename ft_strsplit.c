/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 20:53:08 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/18 19:48:46 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

int		counter_word(char const *str, char c)
{
	int cpt;
	int i;

	cpt = 0;
	i = 0;
	while (*str == c)
		str++;
	if (str[i] != c && str[i])
		cpt++;
	while (str[i])
	{
		if ((str[i] == c)
		&& (str[i + 1] > ' ' && str[i + 1] <= '~'))
			cpt++;
		i++;
	}
	return (cpt);
}

void	split(char **dest, char const *str, int counter, char c)
{
	int		i;
	size_t	len;

	i = 0;
	while (i < counter)
	{
		len = 0;
		while (*str == c && *str)
			str++;
		while ((ft_isprint(*str)))
		{
			str++;
			len++;
		}
		dest[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!(dest[i]))
			return ;
			dest[i] = ft_strndup(str, len);
		i++;
	}
	dest[i] = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char**dest;
	int counter;

	counter = counter_word(s, c);
	dest = (char **)malloc(sizeof(char *) * (counter + 1));
	if (dest != NULL)
	{
		split(dest, s, counter, c);
		return (dest);
	}
	return (NULL);
}

int main(int ac, char **av)
{
	int 	i;
	char 	**tab;

	tab = ft_strsplit(av[1], *av[2]);
	i = 0;
	while (i < 3)
	{
		printf("%s\n",tab[i]);
		i++;
	}
}