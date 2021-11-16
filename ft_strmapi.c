#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	new = strnew(strlen(s));
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
}
