#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i ++;
	return(i);
}

char 	*ft_strdup(char *src)
{
	int i = 0;
	char *dst = malloc(sizeof(char) * ft_strlen(src));
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return(dst);	
}