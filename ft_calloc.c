void	*ft_calloc(size_t count, size_t size)
{
	char	*pt_s;

	pt_s = malloc(count * size);
	if (pt_s == NULL)
		return ((void *)0);
	ft_bzero(pt_s, count * size);
	return (pt_s);
}
