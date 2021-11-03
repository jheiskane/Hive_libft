/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:59:28 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/03 12:59:54 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	const char *s;
	char *d;
	int	i;

	d = dest;
	s = src;
	i = 0;

	while (n--)
	{
		if (s[i] == c)
			return &dest[i+1];
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
