#include <unistd.h>

int ft_strlen(char *str)
{
    if(!str[0])
        return(0);
    return(1 + ft_strlen(str + 1));
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int len = ft_strlen(av[1]) - 1;

        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][len] == ' ' || av[1][len] == '\t')
            len --;
        while(av[1][i] && i <= len)
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                while(av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                write(1, "   ", 3);
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}