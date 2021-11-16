/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:42 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/12 11:16:48 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n) // updated const, size t ->test
{
	size_t	i; // updated to size_t
	size_t	x;

	x = 0;
	while (dest[x])
		x++;
	i = 0;
	while (src[i++] && n > x)
		dest[x+i] = src[i];
	dest[x+i] = '\0';
	return (dest);
}
