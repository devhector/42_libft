/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:34:21 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/09 12:49:12 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*s1, const void	*s2, size_t	n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	if (!s1 || !s2)
		return (NULL);
	src = (const char *)s2;
	dest = (char *)s1;
	if (dest < src)
	{
		i = 0;
		while (n--)
			dest[i] = src[i++];
	}
	else
	{
		i = n - 1;
		while (n--)
			dest[i] = src[i--];
			
	}
	return (s1);
}
