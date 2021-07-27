#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !res)
		return (NULL);
	while (n--)
		*res++ = s[start++];
	*res = '\0';
	return (res);
}