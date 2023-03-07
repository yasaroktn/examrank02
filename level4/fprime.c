#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = atoi(av[1]);
		int i = 2;
		while(i <= nbr)
		{
			if(nbr % i == 0)
			{
				nbr /= i;
				printf("%d", i);
				if(nbr < i)
					break;
				printf("*");
				i --;
			}
			i++;
		}
	}
	printf("\n");
}