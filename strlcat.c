int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	x;

	x = 0;
	while (dest[x])
		x++;
	i = 0;
	while (src[i++] && size > x)
		dest[x+i] = src[i];
	if (size >)
	dest[x+i] = '\0';
	return (x+i+1);
}
