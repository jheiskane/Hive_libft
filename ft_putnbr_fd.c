#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n == INT_MIN)
	{
		ft_putstr_fd("-214748364", fd);
		ft_putnbr_fd(8, fd);
	}
	if (n < 0)
	{
		sign = -1;
		ft_putnbr_fd(-n, fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n - '0', fd);
}
