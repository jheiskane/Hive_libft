/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:15:49 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/15 14:51:51 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	x;

	x = 0;
	while (n-- > 0 && dest[x] != '\0')
		x++;
	i = 0;
	while (src[i])
	{
		dest[x + i] = src[i];
		i++;
	}
	if (n > 0)
		dest[x+i] = '\0';
	return (x+i-1);
}
