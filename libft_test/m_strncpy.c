
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char	*ft_strncpy(char *dest, char *src, int c)
{
	int	i;

	i = 0;
	while (src[i++] && i < c)
		dest[i] = src[i];
	while (i++ < c)
		dest[i] = '\0';
	return (dest);
}

int main (void)
{
	int x = 4;
	//int b;

	char *str2, *str;
	str = malloc(1);





	str2 = "43333";
	printf("strncpy: %s\n", strncpy(str,str2, x));
	printf("ft_strncpy: %s\n", ft_strncpy(str,str2, x));

	// printf("%d", ft_strlen(str));

	// printf("Sqrt: %d\n", ft_sqrt(a));
	free (str);
	return (0);
}
