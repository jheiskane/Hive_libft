/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:58:22 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/12 12:23:31 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char *s;
	char *d;
	char *tmp;
	int i;

	i = 0;
	d = dest;
	s = src;
	tmp = (char*)malloc(n*sizeof(char) + 1);
	if (tmp == NULL)
		return (NULL);
	while (n--)
	{
		tmp[i] = s[i];
		i++;
	}
	i++;
	while (i--)
	{
		d[n] = tmp[n];
		n++;
	}
	free (tmp);
	return (dest);
}
