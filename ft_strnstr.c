/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:35:21 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/10 10:41:09 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		while (*s1 && *s2 && *s1 == *s2 && i < len)
		{
			s1++;
			s2++;
			i++;
		}
		if (!*s2)
			return ((char *)(s1 - s2));
		s1++;
	}
	return (NULL);
}
