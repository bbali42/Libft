#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!*s1 || !*s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * \
			(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
	return (NULL);
	while (*s1)
		*res++ = *s1++;	
	while (*s2)
		*res++ = *s2++;
	*res = '\0';
	return (res);
}