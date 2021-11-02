#include <unistd.h>
#include <stdio.h>
//#include <string.h>

//#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *p = str;
	while (0 < n--)
		*p++ = c;
	return (str);
}

int main (void)
{
	//int a;
	//int b;

	char str[50], str2[50];
	//strcpy(str2,  "This is source");
	//strcpy(str, "This is destination");
	printf("Test 1:\n");
	//printf("memset: %s\n", memset(str2,42,2));
	printf("ft_memset: %s\n", ft_memset(str2,42,2));

	// printf("\nTest 2:\n");
	// strcpy(str2,  "");
	// strcpy(str, "This is destination");
	// printf("memset: %s\n", memset(str2,str));
	// printf("ft_memset: %s\n", ft_memset(str2,str));

	// printf("\nTest 3:\n");
	// strcpy(str2,  "This is source");
	// printf("memset: %s\n", memset(str2,str));
	// printf("ft_memset: %s\n", ft_memset(str2,str));
	return (0);
}