/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:36:46 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/15 17:47:02 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	x;

	x = 0;
	while ((unsigned char)dest[x])
		x++;
	i = 0;
	while ((unsigned char)src[i])
	{
		dest[x + i] = (unsigned char)src[i];
		i++;
	}
	dest[i + x] = '\0';
	return (dest);
}
