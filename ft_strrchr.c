#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*p;

	p == NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	return (p);
}
