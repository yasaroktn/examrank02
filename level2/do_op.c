#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int av1 = atoi(av[1]);
		int av3 = atoi(av[3]);
		int nbr ;
		if (av[2][0] == '*')
			nbr = av1 * av3;
		if (av[2][0] == '+')
			nbr = av1 + av3;
		if(av[2][0] == '-')
			nbr = av1 - av3;
		if(av[2][0] == '/')
			nbr = av1 / av3;
		printf("%d", nbr);
	}
	printf("%c", '\n');
}