// partition.c
#include <stdio.h>

void printArray(int [], int);
void partition(int [], int, int);

int main(void) {
	int size;
    int pivot;
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	int arr[size];

	printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
	printf("Enter pivot: ");
	scanf("%d", &pivot);
	partition(arr, size, pivot);
	printArray(arr, size);
	return 0;
}

// Print array arr
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void partition(int arr[], int size, int pivot)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1- i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr [j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}