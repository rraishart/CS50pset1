/**
 * greedy.c
 * 
 * Ryan Raishart on 4/11/2016
 * rraishart@gmail.com
 * 
 * Finds the fewest coins needed
 * for a given amount of change.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

float GetChange(void);
int GetCoins(double change);
double ConvertCents(float amount);

int main(void)
{
    float change = GetChange();
    double cents = ConvertCents(change);
    int coins = GetCoins(cents);
 
    printf("%i\n",coins);
}

/**
 * Converts dollars to cents and rounds
 */
double ConvertCents(float amount)
{
    // convert to cents
    amount *= 100;
    double rounded;
    // converts to double to be rounded
    rounded = (double) amount;
    rounded = round(rounded);
  
    return rounded;
}

/**
 * Gets valid change amount
 */
float GetChange(void)
{
    float cents = -1.0;
    // asks for input until given a positive float
    while (cents < 0)
    {
        printf("How much change is owed?\n");
        cents = GetFloat();
    }
    return cents;
}

/**
 * Returns amount of coins needed
 */
int GetCoins(double change)
{
    int coins = 0;
    const int QUARTER = 25;
    // checks if quarter can be used
    while (change >= QUARTER)
    {
        // subtracts from amount and increments coin count
        change -= QUARTER;
        coins++;
    }
    
    const int DIME = 10;
    // checks dimes
    while (change >= DIME)
    {
        change -= DIME;
        coins++;
    }
    
    const int NICKEL = 5;
    // checks nickels
    while (change >= NICKEL)
    {
        change -= NICKEL;
        coins++;
    }
    
    const int PENNY = 1;
    // checks pennies
    while (change >= PENNY)
    {
        change -= PENNY;
        coins++;
    }
    return coins;
}

