#include <ctype.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	ft_isprint(int c)
{
	if (c > 19 && c < 127)
		return(1);
	return (0);
}

int main (void)
{

	char *str2;
	char	x;

	x = 'A';




	str2 = "*";
	//printf("original address: %p\n", str2);
	//write(1, &x, 1);

	printf("Test 1:\n");
	printf("isprint: %d\n", isprint(x));
	printf("ft_isprint: %d\n", ft_isprint(x));

	printf("\nTest 2:\n");
	x = 18;

	printf("isprint: %d\n", isprint(x));
	printf("ft_isprint: %d\n", ft_isprint(x));

	printf("\nTest 3:\n");
	x = 19;
	printf("isprint: %d\n", isprint(x));
	printf("ft_isprint: %d\n", ft_isprint(x));

	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
