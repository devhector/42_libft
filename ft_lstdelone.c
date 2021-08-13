/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:15:57 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/13 15:40:14 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst)
		return ;
	next = lst->next;
	del(lst->content);
	free(lst);
	lst = next;
}

/*
Parameters: 
#1. The element to free.
#2. The address of the function used to delete the
content.
Return value: None
External functs: free
Description: Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
*/