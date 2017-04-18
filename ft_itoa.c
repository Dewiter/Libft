/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 03:15:01 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/16 03:24:53 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		digit_size(int n)
{
	int size;

	size = 0;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int 	size;
	int		i;
	char	*tab;
	
	size = digit_size(n);
	tab = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		tab[i] = ft_itoa(n /);
		tab 
	}
}