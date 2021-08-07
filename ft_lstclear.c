/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:16:23 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/07 12:23:32 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



/*
#1. The adress of a pointer to an element.
#2. The adress of the function used to delete the
content of the element.
Return value: None
External functs.: free
Description:

 Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/

void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmp2;
	}
	*lst = NULL;
}