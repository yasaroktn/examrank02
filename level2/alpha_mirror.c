#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int x ;

        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                x = av[1][i] - 'a';
                av[1][i] = 'z' - x;
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                x = av[1][i] - 'A';
                av[1][i] = 'Z' - x;
            }
            write (1, &av[1][i++], 1);
        }
    }
    write (1, "\n", 1);
}