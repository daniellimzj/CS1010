#include <stdio.h>
#include <math.h>

int get_magic(int);

int main(void)
{
    int num1 = 0;
    int num2 = 0;
    printf("Enter first value: ");
    scanf("%d", &num1);
    if (num1 / 100000 >= 1)
    {
        printf("Please try again with a number up to 5 digits");
        return 0;
    }
    int magic1 = get_magic(num1);
    printf("Magic number = %d\n", magic1);
    printf("Enter second value: ");
    scanf("%d", &num2);
    if (num2 / 100000 >= 1)
    {
        printf("Please try again with a number up to 5 digits");
        return 0;
    }
    int magic2 = get_magic(num2);
    printf("Magic number = %d\n", magic2);
}

int get_magic(int num)
{
    int digit = num%10 + (num/100)%10 + (num/10000)%10;
    int magic = digit%10;
    return magic;
}