#include "libft.h"

void	*ft_memcpy(void	*s1, const void	*s2, size_t	n)
{
	char		*dst;
	const char	*src;

	dst = s1;
	src = s2;
	while (n--)
	{
		*dst++ = *src++;
	}
	return (s1);
}
