#include <unistd.h>

char *ft_putnbr(int nbr)
{
    if(nbr > 9)
        ft_putnbr(nbr / 10);
    char *res = nbr % 10 + '0';
    write(1, &res, 1);
}

int main(int ac, char **av)
{
    if (ac < 2)
        write(1, "0\n", 2);
    if(ac > 1)
    {
        char *res;
        int argn = ac;
        ft_putnbr(argn - 1);
        write(1, "\n", 1);
    }
}