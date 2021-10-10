void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num >= 9)
		ft_putnbr_fd(num/10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
