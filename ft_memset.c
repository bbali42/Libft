#include "libft.h"

void    *ft_memset(void *tab, int c, size_t n)
{
    while (n--)
    {
        *(unsigned char *)tab = (unsigned char)c;
        tab++;
    }
    return (tab);
}