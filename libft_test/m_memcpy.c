#include <string.h>
#include <unistd.h>
#include <stdio.h>


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char *s;
	char *d;

	d = dest;
	s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


int main (void)
{
	int a;
	//int b;

	a = 6;

	// THE ODD BEHIAVIOUR OF THE FUNCTION IS CAUSED IF THE 'N' IS LARGER THAN THE SOURCE
	//LENGTH WHICH CAUSES THAT THE '\0’ IS COPIED FROM THE SOURCE AND THE DESTINATION IS
	//TERMINATED AT THE LENGTH OF SOURCE. -> DESTINATION = SOURCE.

	char src[50], dest[50];
	ft_strcpy(src,  "source");
	ft_strcpy(dest, "destination");
	printf("Test 1:\n");
	printf("memcpy: %s\n", (char*)memcpy(dest,src,a));
	ft_strcpy(src,  "source");
	ft_strcpy(dest, "destination");
	printf("ft_memcpy: %s\n", (char*)ft_memcpy(dest,src,a));

	// printf("\nTest 2:\n");
	// ft_strcpy(str2,  "");
	// ft_strcpy(str, "This is destination");
	// printf("memcpy: %s\n", memcpy(str2,str));
	// printf("ft_memcpy: %s\n", ft_memcpy(str2,str));

	// printf("\nTest 3:\n");
	// ft_strcpy(str2,  "This is source");
	// printf("memcpy: %s\n", memcpy(str2,str));
	// printf("ft_memcpy: %s\n", ft_memcpy(str2,str));
	return (0);
}

