void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;

	i = 0;
	while (i < n)
	{
		(char)dest[i] = (char)sourc[i];
		i++;
	}
	return (dst);
}