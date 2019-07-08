#include <stdio.h>
#include <math.h>

float speed_of_sound(float);

int main (void)
{
    float temp = 0;
    printf("Temperature in degrees Fahrenheit: ");
    scanf("%f", &temp);
    float speed = speed_of_sound(temp);
    printf("Speed of sound in air of %.2f degrees =  %.2f ft/sec\n", temp, speed);
}

float speed_of_sound(float temp)
{
    float mid = (5 * temp + 297)/247;
    float speed = 1086 * pow(mid, 0.5);
    return speed;
}