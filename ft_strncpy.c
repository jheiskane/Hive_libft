/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:01:24 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/02 11:01:26 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int c)
{
	int	i;

	i = 0;
	while (src[i++] && i < c)
		dest[i] = src[i];
	while (i++ < c)
		dest[i] = '\0';
	return (dest);
}
