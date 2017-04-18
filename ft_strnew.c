/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 18:39:07 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/16 02:24:44 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	tab = (char *)malloc(sizeof(char) * size);
	if (!(tab))
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
