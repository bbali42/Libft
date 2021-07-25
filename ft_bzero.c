void    ft_bzero(void *tab, size_t n)
{
    while (n)
    {
        (char)*tab = 0;
        (char)*tab++;
        n--;
    }
    return (tab);
}