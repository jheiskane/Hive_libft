#include "libft.h"

char    **ft_strsplit(char const *s, char c)
{
    int		i;
    int		x;
	int		words;
    char	**new;
	int		w_found;

    w_found = 0;
	words = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        while (s[i] != c && s[i])
		{
			i++;
			w_found = 1;
		}
		if (w_found)
			words++;
	}
	if (w_found)
		new = (char **)malloc(words * sizeof(char *));
	else
		return (NULL);
	if (!new)
		return (NULL);
	i = 0;
	words = 0;
	while (s[i])
	{
		x = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			x++;
			i++;
		}
		if (s[i] != '\0')
		{
			new[words] = ft_strnew(x);
			if (!new[words])
				return (NULL);
			ft_strncpy(new[words], &s[i - x], x);
			words++;
		}
	}
	new[words] = ft_strnew(0);
	return (new);
}
