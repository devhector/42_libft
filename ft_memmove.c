/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:34:21 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/03 15:37:21 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmov(void	*s1, const void	*s2, size_t	n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	src = (char *)s2;
	dest = (const char *)s1;
	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (n--)
		{
			dest[i] = src[i];
			i--;
		}
	}
	return (s1);
}
