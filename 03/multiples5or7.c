#include <stdio.h>

int count_multiples(int);

int main (void)
{
    printf("Enter positive integer: ");
    int num = 0;
    scanf("%d", &num);
    int result = count_multiples(num);
    printf("There are %d multiples of 5 or 7 in [1, %d].\n", result, num);
}

int count_multiples(int num)
{
    int count = 0;
    for (int i = 1; i < num + 1; i++)
    {
        if (i % 5 == 0) count++;
        if (i % 7 == 0) count ++;
        if (i % 35 == 0) count--;
    }
    return count;
}