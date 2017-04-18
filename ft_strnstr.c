/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 16:16:19 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/18 14:03:24 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strnstr(char *src, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	while (src[i] != '\0' && n >= ft_strlen(to_find))
	{
		tmp = i;
		while (src[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (j == ft_strlen(to_find))
		{
			if (ft_strlen(src) == ft_strlen(to_find))
				return (src);
			return (src + tmp);
		}
		j = 0;
		i = tmp + 1;
		n--;
	}
	return (0);
}
