// echo.c

#include <stdio.h>
#define MAX_SIZE 100
#include <math.h>

int scan(int []);
void print(int [], int);
int echo(int [], int [], int, int, int);

int main(void)
{
    int sound[MAX_SIZE];
    int size = scan(sound);
    int copies, decay;
	printf("Enter number of echoes and decay percentage: ");
	scanf("%d %d", &copies, &decay);
	int result[MAX_SIZE * (copies + 1)];
	int finalsize = echo(sound, result, size, copies, decay);
	printf("The sound wave with echoes added: \n");
	print(result, finalsize);
	return 0;
}

// To add echo effects to a sound wave and return the size 
// of the resulting sound wave.
// Precond: 
int echo(int sound[], int result[], int size, int copies, int decay)
{
    int finalsize = size * (copies + 1);
    float decayf = decay;
    float percent = 1 - (decayf / 100);
    for (int i = 0; i < copies + 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            result[j + (i * size)] = sound[j] * pow(percent, i);
        }
    }
	return finalsize;
}

// To read in a sound wave
int scan(int sound[])
{
    int size;
	printf("Enter size: ");
	scanf("%d", &size);
	printf("Enter values: \n");
	for (int i = 0; i < size; i++)
    {
        scanf("%d", &sound[i]);
    }
	
	return size;
}

// To print a sound wave
void print(int sound[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", sound[i]);
	printf("\n");
}