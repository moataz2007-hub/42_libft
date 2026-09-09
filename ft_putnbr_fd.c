#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	char	x;

	if (number == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	x = (number % 10) + '0';
	write(fd, &x, 1);
}