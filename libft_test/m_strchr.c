#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//while "c == 0" is to allow the first loop to execute when c == 0 aka. '\0'...
//Without it the function would return NULL which is not correct as when
// the string is "" as in empty.

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || c == 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);

}

int main (void)
{

	char *str2;
	int	x;

	x = 0;




	str2 = "*";
	//printf("original address: %p\n", str2);
	//write(1, &x, 1);

	printf("Test 1:\n");
	printf("strchr: %s\n", strchr(str2, x));
	printf("ft_strchr: %s\n", ft_strchr(str2, x));

	printf("\nTest 2:\n");
	str2 = "";
	printf("strchr: %s\n", strchr(str2, x));
	printf("ft_strchr: %s\n", ft_strchr(str2, x));

	printf("\nTest 3:\n");
	str2 = "42*42*";
	printf("strchr: %s\n", strchr(str2, x));
	printf("ft_strchr: %s\n", ft_strchr(str2, x));

	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
