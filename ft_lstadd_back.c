/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:04:23 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/07 08:42:02 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	if(!*lst || !new)
		return ;
	if ((*lst)->next)
		ft_lstadd_back(lst, new);
	else
	{
		(*lst)->next->content = new;
		(*lst)->next->next = NULL; 
	}
}
