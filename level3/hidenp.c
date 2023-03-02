#include <unistd.h>

int letter_in_string(char c, char *str)
{
	static int i = 0;
	while(str[i])
	{
		if(c == str[i])
			return(1);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		int res = 1;
		while(av[1][i])
		{
			res *= letter_in_string(av[1][i], av[2]);
			i++;
		}
		char *str = "01";
		write(1, &str[res], 1);
	}
	write(1, "\n", 1);
}