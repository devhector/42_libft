#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	return (NULL);
}
