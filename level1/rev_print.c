#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int len = ft_strlen(av[1]) - 1;
		while(len >= 0)
			write(1, &av[1][len--], 1);		
	}
	write(1, "\n", 1);
}