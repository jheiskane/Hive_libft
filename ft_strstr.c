/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:37:33 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/15 10:22:50 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int x;



	i = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x] != '\0' && needle[x] == haystack[i])
		{
			x++;
			if (needle[x] == '\0')
				return ((char *)&haystack[(i+1)-x]);
			i++;
		}
		i++;
	}
	return (0);
}
