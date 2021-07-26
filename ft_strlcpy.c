#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!dst || !src || !size)
		return (0);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst++ = '\0';
	return (ft_strlen(src));
}