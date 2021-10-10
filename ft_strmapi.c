char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = -1;
	if (!s || !f)
		return ((void *)0);
	str = ft_strdup(s);
	if (str == NULL)
		return ((void *)0);
	while (str[++i])
		str[i] = (*f)(i, str[i]);
	return (str);
}
