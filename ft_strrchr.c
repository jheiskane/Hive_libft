/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:37:29 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/12 11:47:10 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c) // changed to const char - TEST
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0 || (char)c == 0) // does this need implicit decl?
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i--;
	}
	return (0);
}

