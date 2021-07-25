#include "libft.h"

char	*strrchr(const char *str, int c)
{
	*str = ft_strlen(str);
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (NULL);
}