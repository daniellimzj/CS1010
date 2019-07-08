#include <stdio.h>
#include <math.h>

int main (void)
{
    int hours = 0;
    float minutes = 0;
    printf("Time since power failure in hours and minutes: \n");
    scanf("%d %f", &hours, &minutes);
    float t = hours + (minutes / 60);
    float temp = (4 * (pow(t, 2)))/(t + 2) - 20;
    printf("Temperature in freeer =  %.2f\n", temp);
}
