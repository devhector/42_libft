/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:15:49 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/13 17:43:53 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int pos, size_t len)
{
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[pos + i] && (pos + i) < ft_strlen(s))
	{
		dst[i] = s[pos + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
