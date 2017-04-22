/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:20:10 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/18 12:46:58 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	if (str1 > str2)
		return (ft_memcpy_rev(str1, str2, n));
	return (str1);
}
