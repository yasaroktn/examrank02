#include <unistd.h>

int main(int ac, char **av)
{
    int j = 1;
    if(ac < 2)
        write(1, "\n", 1);
    while (ac >= (j + 1))
    {
        int i = 0;
        while (av[j][i])
        {
            if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                av[j][i] += 32;
            i++;
        }
        i = 0;
        if (av[j][0] >= 'a' && av[j][0] <= 'z' && av[j][0])
            av[j][0] -= 32;
        while (av[j][i])
        {
            if((av[j][i] == ' ' || av[j][i] == '\t') && (av[j][i+1] >= 'a' && av[j][i+1] <= 'z'))
                av[j][i+1] -=32;
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
}