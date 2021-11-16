#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!new)
		return (NULL);
	new = ft_strcat((char*)s2, s1);
	return (new);
}
