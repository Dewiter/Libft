/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 21:17:38 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/16 00:44:07 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(char *str, const char *to_find)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = i;
		while (str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(to_find))
		{
			if (ft_strlen(str) == ft_strlen(to_find))
				return (str);
			return (str + tmp);
		}
		j = 0;
		i = tmp + 1;
	}
	return (0);
}
