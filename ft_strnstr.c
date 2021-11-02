/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:37:14 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/01 17:26:05 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t i;
	size_t x;

	i = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < n)
	{
		x = 0;
		while (needle[x] != '\0' && needle[x] == haystack[i] && i < n)
		{
			x++;
			if (needle[x] == '\0')
				return (&haystack[(i+1)-x]);
			i++;
		}
		i++;
	}
	return (0);
}
