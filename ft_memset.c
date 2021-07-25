void	*ft_memset (void *tab, int c, size_t n);
{
    while (n)
    {
        (char)*tab = (unsigned char)c;
        tab++;
        n--;
    }
    return (tab);
}