/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:42:14 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/16 20:14:01 by jheiskan         ###   ########.fr       */
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
		while (s[i] != c && s[i])
		{
			i++;
			*w_found = 1;
		}
		if (*w_found)
			words++;
	}
	return (words);
}

static int	popul_chars(char **new, const char *s, int x, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
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
		new[words] = ft_strnew(x);
		if (!new[words])
			return (0);
		ft_strncpy(new[words], &s[i - x], x);
		words++;
		if (s[i] == '\0')
			break ;
	}
	return (words);
}

char	**ft_strsplit(char const *s, char c)
{
	int		x;
	int		words;
	char	**new;
	int		w_found;

	if (!s)
		return (NULL);
	w_found = 0;
	x = 0;
	words = f_words(s, c, &w_found);
	if (w_found)
		new = (char **)malloc(words * sizeof(char *));
	else
		return (NULL);
	if (!new)
		return (NULL);
	words = popul_chars(new, s, x, c);
	new[words] = ft_strnew(0);
	return (new);
}
