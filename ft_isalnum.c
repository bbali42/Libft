#include "libft.h"
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || isdigit(c))
		return (1);
	return (0);
}