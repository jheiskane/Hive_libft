#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i++])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

int main (void)
{
	//int a;
	//int b;

	char *str2, *str;
	str = malloc(1);





	str2 = "";
	printf("strcpy: %s\n", strcpy(str,str2));
	printf("ft_strcpy: %s\n", ft_strcpy(str,str2));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	free (str);
	return (0);
}
