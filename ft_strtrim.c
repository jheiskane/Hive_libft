#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	i;
	char	*new;

	i = 0;
	start = 0;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (s[start] == '\0')
	{
		if (!(new = ft_strnew(0)))
			return (NULL);
		return (new);
	}
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	if (!(new = ft_strnew((i + 1) - start)))
		return (NULL);
	ft_strncpy(new, &s[start], ((i + 1) - start));
	return (new);
}
