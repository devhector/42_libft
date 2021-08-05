/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:04:27 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/05 16:42:56 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t char_count(char const *str, char c);

char	**ft_split(char const *s, char c)
{


}

static size_t char_count(char const *str, char c)
{
	size_t	count;

	if(!str || !c)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str != c)
			count++;
		str++;
	}
	return (count);
}