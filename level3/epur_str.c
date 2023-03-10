#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i - 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        int len = ft_strlen(av[1]);
        while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while((len > 0) && (av[1][len] == ' ' || av[1][len] == '\t'))
            len --;
        while (av[1][i] && i <= len)
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                while(av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                write(1, " ", 1);
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}