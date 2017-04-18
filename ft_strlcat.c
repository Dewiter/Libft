/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:05:05 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/18 18:49:10 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t index;
	size_t len;

	index = 0;
	i = ft_strlen(dest);
	len = ft_strlen(src);
	while (src[index] && i < n)
	{
		dest[i] = src[index];
		index++;
		i++;
	}
	dest[i] = '\0';
	return ((n < i) ? (len + n) : (i + len));
}
