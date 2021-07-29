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
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
