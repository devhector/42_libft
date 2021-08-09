/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:00:58 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/09 11:27:20 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && start < end && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && end > start && ft_strchr(set, s1[end - 1]))
			end--;
		str = (char *)malloc(sizeof(char *) * (end - start + 2));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 2);
	}
	return (str);
}

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
return: The trimmed string. NULL if the allocation fails.
*/