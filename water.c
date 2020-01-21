/**
 * water.c
 * 
 * Ryan Raishart on 4/11/2016
 * rraishart@gmail.com
 * 
 * Displays how many bottles of water
 * the users showers take.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    const int WATER_PER_MIN = 192;
    const int BOTTLE_SIZE = 16;
    // gets input and calculates bottles used
    int bottles = GetInt() * WATER_PER_MIN / BOTTLE_SIZE;
    printf("bottles: %i\n", bottles);
    return 0;
}