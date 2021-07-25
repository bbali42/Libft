#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res

	res = (char *)malloc(count * size);
	if (!res)
		return (NULL);
	return (ft_memset(res, 0, size * count));
}