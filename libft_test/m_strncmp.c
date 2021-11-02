#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && s1[i] == s2[i])
	{
		if (i == n)
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main (void)
{
	//int a;
	//int b;

	char *str, *str2;



	str = "12345  ";
	str2 = "1236      x";
	printf("strncmp: %d\n", strncmp(str,str2, 100000000000));
	printf("ft_strncmp: %d\n", ft_strncmp(str,str2, 100000000000));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	return (0);
}
