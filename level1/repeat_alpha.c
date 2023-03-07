#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int k;
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <='z')
			{
				k = av[1][i] - 'a' + 1;
				while(k > 0)
				{
					write(1, &av[1][i], 1);
					k --;
				}
			}	
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				k = av[1][i] - 'A' + 1;
				while(k > 0)
				{
					write(1, &av[1][i], 1);
					k --;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
