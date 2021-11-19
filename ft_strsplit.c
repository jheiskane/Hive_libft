/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:24:28 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/19 13:29:16 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_words(const char *s, char c, int *w_found)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
			{
				i++;
				*w_found = 1;
			}
			while (s[i] == c && s[i])
				i++;
			if (*w_found)
				words++;
		}
	}
	return (words);
}

static int	popul_chars(char **new, const char *s, size_t x, char c, int words)
{
	size_t	i;
	int		w_index;

	i = 0;
	w_index = 0;
	while (words > w_index)
	{
		x = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			x++;
			i++;
		}
		if (x > 0)
		{
			new[w_index] = ft_strnew(x);
			if (!new[w_index])
				return (0);
			ft_strncpy(new[w_index], &s[i - x], x);
			w_index++;
		}
		while (s[i] == c)
			i++;
	}
	new[words] = 0;
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	x;
	int		words;
	char	**new;
	int		w_found;

	if (!s)
		return (NULL);
	w_found = 0;
	x = 0;
	words = f_words(s, c, &w_found);
	new = (char **)malloc((words + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	popul_chars(new, s, x, c, words);
	return (new);
}
