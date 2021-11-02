/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:15:49 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/02 19:15:54 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlcat(char *dest, char *src, size_t n)
{
	int	i;
	int	x;

	x = 0;
	while (n-- > 0 && dest[x] != '\0')
		x++;
	i = 0;
	while (src[i++])
		dest[x+i] = src[i];
	if (n > 0)
		dest[x+i] = '\0';
	return (x+i-1);
}