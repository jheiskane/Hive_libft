#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}


int main (void)
{

	//char *str2;
	char	x;

	x = '0';




	//printf("original address: %p\n", str2);
	//write(1, &x, 1);

	printf("Test 1:\n");
	printf("isdigit %d\n", isdigit(x));
	printf("ft_isdigit %d\n", ft_isdigit(x));

	printf("\nTest 2:\n");
	x = '1';

	printf("isdigit %d\n", isdigit(x));
	printf("ft_isdigit %d\n", ft_isdigit(x));

	printf("\nTest 3:\n");
	x = 'a';
	printf("isdigit %d\n", isdigit(x));
	printf("ft_isdigit %d\n", ft_isdigit(x));

	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
