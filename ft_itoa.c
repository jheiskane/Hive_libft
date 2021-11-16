#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	char	flag;
	int		x;

	flag = ' ';
	x = 1;
	if (n < 0)
	{
		flag = '-';
		n = n + 1;
		n = n * -1;
		x++;
	}
	i = n;

	while (i > 9)
	{
		i = i / 10;
		x++;
	}
	new = ft_strnew(x);
	if (!new)
		return (NULL);
	while (x > 0)
	{
		i = n % 10;
		if (flag == '-')
		{
			flag = 1;
			i++;
		}
		n = n / 10;
		new[x - 1] = i + '0';
		x--;
	}
	if (flag == 1)
		new[x] = '-';
	return (new);
}

