/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:00:58 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/04 20:07:00 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
    size_t    start;
    size_t    end;
    size_t    i;

    if (!s1)
        return (0);
    i = 0;
    start = 0;
    end = ft_strlen(s1) - 1;
    while (s1[i] && ft_strchr(set, s1[i]))
        start = (i++) + 1;
    if (start >= ft_strlen(s1))
        return ((char *)ft_calloc(sizeof(char), 1));
    i = ft_strlen(s1) - 1;
    while (i && s1[i] && ft_strchr(set, s1[i]))
        end = (i--) - 1;
    return (ft_substr(s1, start, (end - start + 1)));
}

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
return: The trimmed string. NULL if the allocation fails.
*/