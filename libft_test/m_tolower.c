#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_tolower(int c)
{
	if (c < 91 && c > 64)
		return (c+32);
	return (c);
}


int main (void)
{

	//char *str2;
	int	x;

	x = 'A';




	//str2 = "*";
	//printf("original address: %p\n", str2);
	//write(1, &x, 1);

	printf("Test 1:\n");
	printf("tolower: %c\n", tolower(x));
	printf("ft_tolower: %c\n", ft_tolower(x));

	printf("\nTest 2:\n");
	x = '1';
	printf("tolower: %c\n", tolower(x));
	printf("ft_tolower: %c\n", ft_tolower(x));

	printf("\nTest 3:\n");
	x = 'o';
	printf("tolower: %c\n", tolower(x));
	printf("ft_tolower: %c\n", ft_tolower(x));

	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
