#include "libft.h"

int	is_set(char c, char *charset)
{
	while (*charset++)
		if (*charset == c)
			return (1);
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*res;
	if (!*s1 || !*set)
		return (NULL);
	len = 0;
	while(*s1 && is_set(*s1, set))
		s1++;
	while(*s1++ && !is_set(*s1, set))
		len++;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return NULL;
	s1 = 0;
	while(*s1 && is_set(*s1, set))
		s1++;
	while(*s1++ && !is_set(*s1, set))
		*res++ = *s1++;
	*res = '\0';
	return (res);
}