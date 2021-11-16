/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:51 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/16 18:09:29 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_flag(int *n, char *flag, int x)
{
	if (n < 0)
	{
		*flag = '-';
		*n = *n + 1;
		*n = *n * -1;
		x++;
	}
	return (x);
}

static char	*populate_nbr(char *new, int x, int n, char *flag)
{
	int	i;

	while (x > 0)
	{
		i = n % 10;
		if (*flag == '-')
		{
			*flag = 1;
			i++;
		}
		n = n / 10;
		new[x - 1] = i + '0';
		x--;
	}
	return (new);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	char	flag;
	int		x;

	flag = ' ';
	x = 1;
	x = calc_flag(&n, &flag, x);
	i = n;
	while (i > 9)
	{
		i = i / 10;
		x++;
	}
	new = ft_strnew(x);
	if (!new)
		return (NULL);
	new = populate_nbr(new, x, n, &flag);
	if (flag == 1)
		new[x] = '-';
	return (new);
}
