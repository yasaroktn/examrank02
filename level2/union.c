#include <unistd.h>

int repetitive_case(char c, char *str, int avi)
{
	int i = 0;
	while(str[i] && i < avi)
	{
		if(c == str[i])
			return(0);
		i++;
	}
	return(1);
}
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int av1len = ft_strlen(av[1]);
		while(av[1][i])
		{
			if(repetitive_case(av[1][i], av[1], i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(repetitive_case(av[2][i], av[2], i) == 1)
			{
				if(repetitive_case(av[2][i], av[1], av1len) == 1)
					write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}