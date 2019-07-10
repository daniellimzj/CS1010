#include <stdio.h>
#include <math.h>

int countwinners(int, int, int);

int main (void)
{
    int factor = 0;
    int musthave = 0;
    int participants = 0;
    printf("Enter factor-digit: ");
    scanf("%d", &factor);
    printf("Enter must-have digit: ");
    scanf("%d", &musthave);
    printf("Enter number of participants: ");
    scanf("%d", &participants);
    int winners = countwinners(factor, musthave, participants);
    printf("Number of winners: %d.\n", winners);
}

int countwinners(int factor, int musthave, int participants)
{
    int count = 0;
    for (int i = 1; i < participants + 1; i++)
    {
        if (i % factor == 0)
        {
            int j = i;
            while (j > 1)
            {
                if (j % 10 == musthave)
                {
                    count++;
                    break;
                }
                else j = j / 10;
            }
        }
    }
    return count;
}
