/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:32:08 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/22 04:10:52 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tab;
	t_list	*current;

	tab = NULL;
	current = lst;
	while (current)
	{
		if (!(current))
		{
			current = NULL;
			free(current);
		}
		tab = f(current);
		tab = tab->next;
		current->next = lst;
	}
	return (tab);
}
