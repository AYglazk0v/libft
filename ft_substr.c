char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s)
		return ((void *)0);
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return ((void *)0);
	if (ft_strlen(s) < start)
	{
		sub[0] = '\0';
		return (sub);
	}
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
