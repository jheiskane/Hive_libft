void	*memset(void *str, int c, size_t n)
{
	int				i;
	unsigned char	x;

	x = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		(unsigned char) str[i] = x;
	}
	return (str);
}

// Still needs working. Having problems with the casting