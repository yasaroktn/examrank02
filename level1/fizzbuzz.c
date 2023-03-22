#include <unistd.h>

void ft_putnbr(char nbr)
{
    char *res = "0123456789";
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    write (1, &res[nbr % 10], 1);
}

int main(int ac, char **av)
{
    int nbr = 1;
    while (nbr <= 100)
    {
        if (nbr % 3 == 0 && nbr % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (nbr % 3 == 0)
            write (1, "fizz", 4);
        else if (nbr % 5 == 0)
            write (1, "buzz", 4);
        else
            ft_putnbr(nbr);
        write (1, "\n", 1);
        nbr ++;
    }
}