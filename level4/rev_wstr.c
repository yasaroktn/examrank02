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
        int tmp;
        int a = 0;
        int i = ft_strlen(av[1]);
        while (av[1][a] && (av[1][a] == ' ' || av[1][a] == '\t'))
            a++;
        while (av[1][i] && (av[1][i] == ' ' || av[1][a] == '\t'))
            i--;
        while (av[1][i] && i >= a)
        {
            if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] > 0)
                    i --;
                tmp = i;
                i++;
            }
            while(av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
                write(1, &av[1][i++], 1);
            i = tmp;
            if (av[1][i] == ' ' || av[1][i] == '\t')
            {
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i--;
                write(1, " ", 1);
            }
        }        
    }
    write(1, "\n", 1);
}