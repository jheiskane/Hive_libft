/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_memccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:43:56 by jheiskan          #+#    #+#             */
/*   Updated: 2021/11/03 12:58:42 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	const char *s;
	char *d;
	int	i;

	d = dest;
	s = src;
	i = 0;

	while (n--)
	{
		if (s[i] == c)
			return &dest[i+1];
		d[i] = s[i];
		i++;
	}
	return (NULL);
}

int main (void)
{
	int a;
	int c;

	a = 15;
	c = 42;

	// THE ODD BEHIAVIOUR OF THE FUNCTION IS CAUSED IF THE 'N' IS LARGER THAN THE SOURCE
	//LENGTH WHICH CAUSES THAT THE '\0’ IS COPIED FROM THE SOURCE AND THE DESTINATION IS
	//TERMINATED AT THE LENGTH OF SOURCE. -> DESTINATION = SOURCE.

	char src[50], dest[50];
	strcpy(src,  "*source");
	strcpy(dest, "destination");
	printf("Test 1:\n");
	printf("memccpy: %s\n", (char*)memccpy(dest,src,c,a));
	strcpy(src,  "*source");
	strcpy(dest, "destination");
	printf("ft_memccpy: %s\n", (char*)ft_memccpy(dest,src,c,a));

	// printf("\nTest 2:\n");
	// strcpy(str2,  "");
	// strcpy(str, "This is destination");
	// printf("memccpy: %s\n", memccpy(str2,str));
	// printf("ft_memccpy: %s\n", ft_memccpy(str2,str));

	// printf("\nTest 3:\n");
	// strcpy(str2,  "This is source");
	// printf("memccpy: %s\n", memccpy(str2,str));
	// printf("ft_memccpy: %s\n", ft_memccpy(str2,str));
	return (0);
}
