/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:36:40 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/12 12:27:02 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && s1[i] == s2[i])
	{
		if (i == n)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
