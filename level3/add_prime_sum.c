#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while(str[i])
		res = (res * 10) + str[i++] - '0';
	return(res);
}

void	ft_putnbr(int nbr)
{
	char res[] = "0123456789";
	if(nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, &res[nbr % 10], 1);
}

int prime_number_detection(int nbr)
{
	int i = 2;
	if ((nbr == 1) || (nbr == 0))
		return(0);
	while(i < nbr)
	{
		if(nbr % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int main (int ac, char **av)
{
	if(ac == 2)
	{
		int res = 0;
		int i = 0;
		int nbr = ft_atoi(av[1]);
		while(i <= nbr)
		{
			if(prime_number_detection(i) == 1)
				res += i;
			i++;
		}
		ft_putnbr(res);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
}
