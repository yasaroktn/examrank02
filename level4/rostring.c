#include <unistd.h>

int ft_strlen (char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        int len = ft_strlen(av[1]);

        while (av[1][len] == ' ' || av[1][len] == '\t')
            len --;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        int j = i;
        while ((av[1][i] != ' ' && av[1][i] != '\t') && av[1][i])
            i++;
        int k = i;
        while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
            i++;
        while (av[1][i] && i <= len)
        {
            if (av[1][i] == ' ' ||   av[1][i] == '\t')
            {
                while (av[1][i] == ' ' || av[1][i] == '\t')
                    i++;
                if (av[1][i] != '\0')
                    write(1, " ", 1);
            }
            write(1, &av[1][i++], 1);
        }
        while (av[1][k] && (av[1][k] == ' ' || av[1][k] == '\t'))
            k++;
        if (av[1][k] && (av[1][k] != ' ' && av[1][k] != '\t'))
            write(1, " ", 1);
        while (av[1][j] && (av[1][j] != ' ' && av[1][j] != '\t'))
            write(1, &av[1][j++], 1);
    }
        write(1, "\n", 1);
}