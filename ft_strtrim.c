#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	i;
	char	*new;

	i = 0;
	start = 0;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')//find start of str
	{
		if (!s[start])
			return (NULL);
		start++;
	}
	i = ft_strlen(s) - 1; // len of str (-1 to correct for the index)
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') //traverse from end until whitespace
		i--;
	if (!(new = ft_strnew((i + 1) - start)))
		return (NULL);
	ft_strncpy(new, &s[start], ((i + 1) - start));
	return (new);
}
