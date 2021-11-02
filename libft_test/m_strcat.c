#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
char	*ft_strcpy(char *dest, char *src);
int main (void)
{
	//int a;
	//int b;

	char str[50], str2[50];
	strcpy(str2,  "This is source");
	strcpy(str, "This is destination");
	printf("Test 1:\n");
	printf("strcat: %s\n", strcat(str2,str));
	printf("ft_strcat: %s\n", ft_strcat(str2,str));

	printf("\nTest 2:\n");
	strcpy(str2,  "");
	strcpy(str, "This is destination");
	printf("strcat: %s\n", strcat(str2,str));
	printf("ft_strcat: %s\n", ft_strcat(str2,str));

	printf("\nTest 3:\n");
	strcpy(str2,  "This is source");
	strcpy(str, "");
	printf("strcat: %s\n", strcat(str2,str));
	printf("ft_strcat: %s\n", ft_strcat(str2,str));
	return (0);
}
