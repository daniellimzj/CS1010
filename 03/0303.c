#include <stdio.h>

int main(void)
{
    printf("enter integers, terminate with ctrl-d\n");
    int value = 0;
    int count = 0;
    while (scanf("%d", &value) != EOF)
    {
        count ++;
    }
    printf("Number of values entered = %d\n", count);
    
}