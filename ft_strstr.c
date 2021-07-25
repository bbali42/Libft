char	*strnstr(const char *str, const char *tofind, size_t n)
{
	int		i;
	int		j;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}