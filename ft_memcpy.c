#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (dst);
}