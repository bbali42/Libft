void	*ft_memchr(const void *str, int c, size_t n)
{
	while (*str && *str < n)
	{
		if (*str == (unsigned char)c)
			return (str)
			str++;
	}
	return (NULL);
}