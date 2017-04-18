/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:37:50 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/12 20:02:50 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tab;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	tab = ft_strnew(size);
	while (s[i])
	{
		tab[i] = f(s[i]);
		i++;
	}
	return (tab);
}
