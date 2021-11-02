/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:37:33 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/01 17:09:52 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int x;

	i = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x] != '\0' && needle[x] == haystack[i])
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
