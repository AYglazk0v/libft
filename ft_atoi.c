
int	ft_atio(const char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '0')
		num = num * 10 + *str - '0';
	return (sign * num);
}
