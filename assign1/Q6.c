#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Include one integer as a command line argument");
        exit(1);
    }

    int input = atoi(argv[1]);
    int temp = input;
    int len = 0;

    while(temp > 0)
    {
        temp = temp / 10;
        len += 1;
    }

    int arr[len];

    for(int i=len-1; i>=0; i--)
    {
        arr[i] = input % 10;
        input = input / 10;
    }

    int x = len-1;

    for(int i=0; i<len; i++)
    {
        int curr = arr[i]*(pow(10,x));
        if(curr != 0)
        {
            printf("%i", curr);
            if(i != (len-1))
            {
                printf(" + ");
            }
        }

        x--;
    }
}
