#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int i = 0;
	char c;

	if(nbr > 9)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
int		ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i])
	{
		res *= 10;
		res = res + str[i++] - 48;
	}
	return(res);

}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int res;
		int av1 = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(av1);
			write(1, " = ", 3);
			res = i * av1;
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}