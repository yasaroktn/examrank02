#include <stdio.h>
int string_digit(const char *str, const char c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (i);
		i++;
	}
	return(-1);
}
size_t ft_strlen(const char *str)
{
	size_t i = 0;
	while(str[i])
		i++;
	return (i);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	while(reject[i])
	{
		if (string_digit(s, reject[i])!= -1)
			return(string_digit(s, reject[i]));
		i++;
	}
	return (ft_strlen(s));
}