#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = strnew(strlen(s));
	while (s[i])
	{
		new[i] = f(s[i]); //could  be tested with tolower()
		i++;
	}
}
