void	*memchr(const void *str, int c, size_t n)
{
	while (*str && *str < n)
	{
		if (*str == (char)c)
			return (str)
			str++;
	}
	return (NULL);
}