#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s == NULL)
		return ;
	while(*s)
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}
