#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
char	*ft_strcpy(char *dest, char *src);
int main (void)
{
	int a = 5;
	//int b;

	char str[50], str2[50];
	strcpy(str2,  "This is source");
	strcpy(str, "This is destination");
	printf("Test 1:\n");
	printf("strncat: %s\n", strncat(str2,str, a));
	printf("ft_strncat: %s\n", ft_strncat(str2,str, a));

	printf("\nTest 2:\n");
	a = 100;
	strcpy(str2,  "");
	strcpy(str, "");
	printf("strncat: %s\n", strncat(str2,str, a));
	printf("ft_strncat: %s\n", ft_strncat(str2,str, a));

	printf("\nTest 3:\n");
	a = 3;
	strcpy(str2,  "This is source");
	strcpy(str, "222");
	printf("strncat: %s\n", strncat(str2,str, a));
	printf("ft_strncat: %s\n", ft_strncat(str2,str, a));
	return (0);
}
