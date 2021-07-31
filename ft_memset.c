#include "libft.h"

void	*ft_memset(void	*s, int	c, size_t	n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (n--)
	{
		*p++ = (char)c;
	}
	return (s);
}
