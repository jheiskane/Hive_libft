/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:23:37 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/04 10:33:52 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* NO error checking version, as in the original */
int	ft_atoi(const char *str)
{
	int	i;
	int sign;
	int	res;

	i = 0;
	sign = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i++] <= '9' && str[i] >= '0')
		res = str[i];
	while (str[i++] <= '9' && str[i] >= '0')
		res = res * 10 + str[i];
	return (res * sign);
}
