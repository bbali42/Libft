int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (++i < n && (unsigned char*)(*s1 == *s2))
	{
		(unsigned char*)s1++;
		(unsigned char*)s2++;
	}
	return ((int)(*s1 - *s2));
}