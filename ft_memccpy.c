/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:59:28 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/12 17:46:47 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char *s;
	char *d;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;

	while (n > i && s[i])
	{
		if (s[i] == c)
			return (&dest[i + 1]);
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
