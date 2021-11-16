#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-214748364", fd);
		ft_putnbr_fd(8, fd);
	}
	else if (n < 0)
	{
		ft_putnbr_fd(-n, fd);
	}
	else if(n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
