/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:45:42 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/02 11:45:55 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int	x;

	x = 0;
	while (dest[x])
		x++;
	i = 0;
	while (src[i++] && n > x)
		dest[x+i] = src[i];
	dest[x+i] = '\0';
	return (dest);
}
