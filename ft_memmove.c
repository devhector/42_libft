/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:34:21 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/02 16:34:22 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmov(void	*s1, const void	*s2, size_t	n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	src = s2;
	dest = s1;
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
