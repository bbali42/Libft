#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}