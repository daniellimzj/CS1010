/**
 * rabbit.c 
 * A rabbit can jump at most 50 centimetres. It needs to cross a
 * river, with rocks positioned in a straight line in the river.
 * The program computes the minimum number of jumps for the rabbit
 * to cross to the other side of the river.
 */

#include <stdio.h>

int countJumps(int [], int);

int main(void)
{
	int num_rocks;            // including opposite bank
	printf("Enter number of rocks: ");
	scanf("%d", &num_rocks);
	int rocks[num_rocks];
    printf("Enter distances between rocks: ");
    for (int i = 0; i < num_rocks; i++)
    {
        scanf("%d", &rocks[i]);
    }
    int result = countJumps(rocks, num_rocks);
    printf("%d\n", result);
	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0
int countJumps(int rocks[], int size) 
{
    int jumps = 0;
    int dist = 0;
    int i = 0;
    int j = 0;
    for (int d = 0; d < size - 1; d++)
    {
        if (rocks[d + 1] > rocks[d] + 50) return -1;
    }
    while (i < size - 1)
    {
        if (jumps == 0) dist = rocks[j];
        else dist = rocks[j] - rocks[i];
        while (dist < 51)
        {
            j++;
            if (jumps == 0) dist = rocks[j];
            else dist = rocks[j] - rocks[i];
            if (rocks[j] == 0) break;
        }
        j--;
        i = j;
        jumps++;
        if (rocks[j] == 0) break;
    }

	return jumps; // this is just a stub; replace it with the correct value
}
