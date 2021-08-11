/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectfern <hectfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:04:27 by hectfern          #+#    #+#             */
/*   Updated: 2021/08/10 21:22:03 by hectfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters #1. The string to be split.
#2. The delimiter character.
Return value The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/

#include "libft.h"

static void		**clear_mem(char	**str);
static size_t	word_counter(char const	*str, char	c);
static char		*word_split(char const	*str, char	c);

char	**ft_split(char const	*s, char	c)
{
	char	**result;
	size_t	word_c;
	size_t	i;
	size_t	j;

	word_c = word_counter(s, c);
	result = (char **)malloc(sizeof(char *) * (word_c + 1));
	if (!result || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && i < word_c)
	{
		if (s[j] != c)
		{
			result[i] = word_split(&s[j], c);
			if (!result[i++])
				return ((char **)clear_mem(result));
			while (s[j] && s[j] != c)
				j++;
		}
		else
			j++;
	}
	return (result);
}

static size_t	word_counter(char const	*str, char	c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*word_split(char const	*str, char	c)
{
	char	*word;
	size_t	word_len;

	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, word_len + 1);
	return (word);
}

static void	**clear_mem(char	**str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
