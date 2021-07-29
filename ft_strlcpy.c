#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i < size && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
