#include <unistd.h>

void    ft_putnbr(int nbr)
{
    char *res;
    if(nbr > 9)
        ft_putnbr(nbr / 10);

    res = nbr % 10 + '0';
    write(1, &res, 1);
}

int main(int ac, char **av)
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz\n", 9);
            i++;
        }
        else if(i % 3 == 0)
        {
            write(1, "fizz\n", 5);
            i++;
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz\n", 5);
            i++;
        }
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
            i++;
        }
    }
}