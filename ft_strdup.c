#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = malloc(sizeof(char) * (len + 1));
	while (len-- > 1)
		res++ = src++;
	*res = '\0';
	return (res);
}