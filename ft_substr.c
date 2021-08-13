/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:15:49 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/13 18:45:25 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int pos, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!s)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= pos && j < len)
		{
			dst[j] = s[i];
			j++;
		}
		i++;
	}
	dst[j] = '\0';
	return (dst);
}
