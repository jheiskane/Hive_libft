#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	size_t			i;

	i = 0;
	if(!(new = ft_strnew(len)))
		return (NULL);
	while(new[i] && i < len)
	{
		new[i] = s[start];
		start++;
		i++;
	}
}
