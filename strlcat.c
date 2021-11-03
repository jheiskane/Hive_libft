/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:07:33 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/03 11:07:34 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	x;

	x = 0;
	while (dest[x] && size-- != 0)
		x++;
	i = 0;
	while (src[i++])
		dest[x+i] = src[i];
	if (size > 0)
		dest[x+i] = '\0';
	return (x+i+1);
}
