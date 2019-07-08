#include <stdio.h>
#include <math.h>

int is_prime(int);

int main (void)
{
    int num = 0;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    int prime = is_prime(num);
    if (prime == 1) printf("%d is prime.\n", num);
    else printf("%d is not a prime.\n", num);
}

int is_prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}