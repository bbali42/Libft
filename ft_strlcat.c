#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	size_dst;
	unsigned int	size_src;
	unsigned int	i;

	size_dst = ft_strlen(dst);
	if (size <= size_dst)
		size_src = ft_strlen(src) + size;
	else
		size_src = ft_strlen(src) + size_dst;
	i = 0;
	while (src[i] && (size_dst + 1) < size)
		dst[size_dst++] = src[i++];
	dst[size_dst] = '\0';
	return (size_src);
}