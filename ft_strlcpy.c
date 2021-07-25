#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int					i;

	i = 0;
	if (!dst || !src || !size)
		return (0);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}