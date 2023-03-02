#include <unistd.h>

int    search_in_string(char c, char *str, int len)
{
    int i = 0;
    while(str[i] && i < len)
    {
        if(c == str[i])
        {
            return(1);
        }
        i++;
    }
    return(0);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int avi2 = ft_strlen(av[2]);
       while(av[1][i])
       {
            if(search_in_string(av[1][i], av[1], i) == 0)
            {
                if(search_in_string(av[1][i], av[2], avi2) == 1)
                    write(1, &av[1][i], 1);
            }
            i++;
       }
    }
    write(1, "\n", 1);
}