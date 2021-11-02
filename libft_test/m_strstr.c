#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int x;

	i = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i] != '\0')
	{
		x = 0;
		while (needle[x] != '\0' && needle[x] == haystack[i])
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






	printf("Test 1:\n");
	str2 = "*sds";
	str1 = "";
	printf("strstr: %s\n", strstr(str2, str1));
	printf("ft_strstr: %s\n", ft_strstr(str2, str1));

	printf("\nTest 2:\n");
	str2 = "shish";
	str1 = "is";
	printf("strstr: %s\n", strstr(str2, str1));
	printf("ft_strstr: %s\n", ft_strstr(str2, str1));

	printf("\nTest 3:\n");
	str2 = "42*42*";
	str1 = "*42";
	printf("strstr: %s\n", strstr(str2, str1));
	printf("ft_strstr: %s\n", ft_strstr(str2, str1));

	printf("\nTest 4:\n");
	str2 = "";
	str1 = "";
	printf("strstr: %s\n", strstr(str2, str1));
	printf("ft_strstr: %s\n", ft_strstr(str2, str1));

	printf("\nTest 4:\n");
	str2 = "xs";
	str1 = "";
	printf("strstr: %s\n", strstr(str2, str1));
	printf("ft_strstr: %s\n", ft_strstr(str2, str1));


	//printf("ft_strdup address: %p\n", ft_strdup(str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
