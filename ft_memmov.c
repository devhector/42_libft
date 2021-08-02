#include "libft.h"

void	*ft_memmov(void	*s1, const void	*s2, size_t	n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	src = s2;
	dest = s1;
	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (n--)
		{
			dest[i] = src[i];
			i--;
		}
	}
	return (s1);
}
