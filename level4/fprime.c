#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 1;
        int num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while(num >= ++i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (num == i)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
        }
    }
    printf("\n");
}