int	ft_isdigit(int c)
{
	if (c < 48 || (char)c > 57)
			return (0);
	return (1);
}