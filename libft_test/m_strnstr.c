#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char	*ft_strnstr(char *haystack, char *needle, size_t n)
{
	size_t i;
	size_t x;

	i = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i] != '\0' && i < n)
	{
		x = 0;
		while (needle[x] != '\0' && needle[x] == haystack[i] && i < n)
		{
			x++;
			if (needle[x] == '\0') // if they still match and needle is finished
				return (&haystack[(i+1)-x]); //Return the start of the first "needle"
			i++;
		}
		i++;
	}
	return (0);
}



int main (void)
{

	char *str2;
	char *str1;
	size_t	n;








	printf("Test 1:\n");
	str2 = "*sds";
	str1 = "";
	n = 1000000000044400;
	printf("strnstr: %s\n", strnstr(str2, str1, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str2, str1, n));

	printf("\nTest 2:\n");
	str2 = "";
	str1 = "is";
	n = 3;
	printf("strnstr: %s\n", strnstr(str2, str1, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str2, str1, n));

	printf("\nTest 3:\n");
	n = 3;
	str2 = "42*42*";
	str1 = "*42";
	printf("strnstr: %s\n", strnstr(str2, str1, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str2, str1, n));

	printf("\nTest 4:\n");
	n = 1;
	str2 = "";
	str1 = "";
	printf("strnstr: %s\n", strnstr(str2, str1, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str2, str1, n));

	printf("\nTest 4:\n");
	n = 4;
	str2 = "xs";
	str1 = "";
	printf("strnstr: %s\n", strnstr(str2, str1, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str2, str1, n));


	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
