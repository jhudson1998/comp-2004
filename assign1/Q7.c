#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Provide one integer between 1 and 200");
        exit(1);
    }

    int num = atoi(argv[1]);

    if(num < 1 || num > 200)
    {
        printf("Provide one integer between 1 and 200");
        exit(1);
    }

    for(int i=1; i<num; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            printf("threefive\n");
        }
        else if(i % 3 == 0)
        {
            printf("three\n");
        }
        else if(i % 5 == 0)
        {
            printf("five\n");
        }
        else
        {
            printf("%i\n", i);
        }
    }
}
