void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	if (dest < src)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	return ((void *)dest);
}
