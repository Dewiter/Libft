/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:29:30 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/16 03:12:53 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	char	*tab;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	tab = ft_memalloc(len);
	if (!(tab))
		return (NULL);
	tab = (char *)s;
	i = 0;
	while (*tab == ' ' || *tab == '\n' || *tab == '\t')
		tab++;
	if (*tab == '\0')
		return (tab);
	len = ft_strlen(tab);
	while (tab[len - 1] == ' ' || tab[len - 1] == '\t' || tab[len - 1] == '\n')
	{
		if (tab[len] == '\0')
			tab[len - 1] = '\0';
		len--;
	}
	tab = (char *)ft_strsub((char const *)tab, 0, len);
	return (tab);
}
