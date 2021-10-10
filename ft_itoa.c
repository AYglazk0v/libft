static void	ft_int2char(long int n, char *str, int len)
{
	int	k;

	k = 0;
	if (n < 0)
	{
		str[0] = '-';
		k = 1;
		n = -n;
	}
	str[len--] = '\0';
	while (len >= k)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
}

static int	ft_size_int(long int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	int		len;

	len = ft_size_int(n);
	str = malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return ((void *)0);
	ft_int2char(n, str, len);
	return (str);
}
