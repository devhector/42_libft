/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:15:49 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/09 16:59:36 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int pos, size_t len)
{
	size_t	i;
	char	*dst;

	dst = (char *)malloc(sizeof(char *) * (len + 2));
	if (!dst || !s)
		return (NULL);
	i = 0;
	while (i < len && s[pos + i] != '\0' && (pos + i) < ft_strlen(s))
	{
		dst[i] = s[pos + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
