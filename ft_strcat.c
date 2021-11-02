/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:36:46 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/02 11:36:48 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = 0;
	while (dest[x])
		x++;
	i = 0;
	while (src[i++])
		dest[x+i] = src[i];
	dest[x] = '\0';
	return (dest);
}
