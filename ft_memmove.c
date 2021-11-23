/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:58:22 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/23 15:45:44 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	*move(unsigned char *d, unsigned char *s, size_t n)
{	
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (!src && !dest && n > 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((d - s) < 0)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		return (move(d, s, n));
	return (dest);
}
