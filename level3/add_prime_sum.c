#include <unistd.h>

void ft_putnbr(int nbr)
{
    char *res = "0123456789";
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    write(1, &res[nbr % 10], 1);
}

int ft_atoi (char *str)
{
    int i = 0;
    int res;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + str[i++] - '0';
    return (res);
}

int prime_nbr(int nbr)
{
    int i = 2;
    if (nbr == 1)
        return (0);
    while (i < nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac != 2)
        write(1, "0", 1);
    if (ac == 2)
    {
        int i = 1;
        int res = 0;
        int av1 = ft_atoi(av[1]);
        while (i <= av1)
        {
            if (prime_nbr(i) == 1)
                res += i;
            i++;
        }
        ft_putnbr(res);
    }
    write(1, "\n", 1);
}  