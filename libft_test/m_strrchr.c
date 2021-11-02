#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//while "c == 0" is to allow the first loop to execute when c == 0 aka. '\0'...
//Without it the function would return NULL which is not correct as when
// the string is "" as in empty.

#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0 || (char)c == 0)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i--;
	}
	return (0);
}




int main (void)
{

	char *str2;
	int	x;

	x = 1000;




	printf("Test 1:\n");
	str2 = "";
	printf("strrchr: %s\n", strrchr(str2, 100000000));
	printf("ft_strrchr: %s\n", ft_strrchr(str2, 1000000));
	printf("%p\n",str2);
	printf("%p\n",strrchr(str2, 100000000));

	printf("\nTest 2:\n");
	str2 = "";
	printf("strrchr: %s\n", strrchr(str2, 100000000));
	printf("ft_strrchr: %s\n", ft_strrchr(str2, 100000000));

	printf("\nTest 3:\n");
	str2 = "42*42*";
	printf("strrchr: %s\n", strrchr(str2, 100000000));
	printf("ft_strrchr: %s\n", ft_strrchr(str2, 100000000));

	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
