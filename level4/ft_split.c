#include <stdlib.h>

int ft_strlen(char *str, int start)
{
    int i = 0;
    while(str[start++])
        i++;
    return (i);
}

int total_string(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i])
    {   
        while((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
            i++;
        if(str[i] == '\0')
            return(res);
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        res ++;
    }
    return(res);
}

char *total_char(char *str, int start)
{
    char *a = malloc(sizeof(char) *ft_strlen(str, start) + 1);
    int i = 0;
    while(str[start] && str[start] != ' ' && str[start] != '\t' && str[start] !='\n')
    {
        a[i] = str[start];
        start++;
        i++;
    }
    return(a);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    char **arry = malloc(sizeof(char *) * (total_string(str) + 1));
    while (str[i])
    {
        int k = 0;
        if((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
        {
            arry[j++] = total_char(str,i);
            while((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') &&str[i])
                i++;
        }
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
    }
    return(arry);
}
/*
#include <stdio.h>
int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour je m'appel Arthur");
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/