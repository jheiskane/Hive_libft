#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlcat(char *dest, char *src, size_t n)
{
	int	i;
	int	x;

	x = 0;
	while (n-- > 0 && dest[x] != '\0')
		x++;
	printf("%x\n",x);
	i = 0;
	while (src[i++])
		dest[x+i] = src[i];
	printf("%d\n",i);
	if (n > 0)
		dest[x+i] = '\0';
	return (x+i-1);
}
char	*ft_strcpy(char *dest, char *des);
int main (void)
{
	int a = 4;
	//int b;

	char src[50], des[50];
	a = 17;
	printf("\nTest 1:\n");
	strcpy(src, "This is source");
	strcpy(des, "222");
	printf("strlcat: %lu\n", strlcat(des,src, a));
	strcpy(src, "This is source");
	strcpy(des, "222");
	printf("ft_strlcat: %d\n", ft_strlcat(des,src, a));

	printf("\nTest 2:\n");

	a = 2;
	strcpy(src, "This is source");
	strcpy(des, "22222222222");
	printf("strlcat: %lu\n", strlcat(des,src, a));
	strcpy(src, "This is source");
	strcpy(des, "22222222");
	printf("ft_strlcat: %d\n", ft_strlcat(des,src, a));

	printf("\nTest 3:\n");
	a = 3;
	strcpy(src, "This is ssssssssssssssssssssssssssssssssss");
	strcpy(des, "222");
	printf("strlcat: %lu\n", strlcat(des,src, a));
	strcpy(src, "This is ssssssssssssssssssssssssssssssssss");
	strcpy(des, "222");
	printf("ft_strlcat: %d\n", ft_strlcat(des,src, a));
	return (0);
}
