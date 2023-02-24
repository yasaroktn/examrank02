#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int count_digit(int nbr)
{
	int i = 0;
	if (nbr == 0)
	{
		i++;
	}
	if(nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while(nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int nbr)
{
	int nbrlen = count_digit(nbr);
	char *str = malloc(sizeof(char) * nbrlen);
	int i = 0;

	if(nbr == -2147483648)
		return("-2147483648");
	if(nbr == 0)
		return("0\0");
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
		i++;
	}
	str[nbrlen] = '\0';
	nbrlen --;
	while(nbr != 0 && i <= nbrlen)
	{
		str[nbrlen] = (nbr % 10) + '0';
		nbr /= 10;
		nbrlen --;
	}
	return(str);
}

/* int main()
{
	int a = -214748368;
	printf("%s", ft_itoa(a));
} */