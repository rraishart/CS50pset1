/**
 * mario.c
 * 
 * Ryan Raishart on 4/11/2016
 * rraishart@gmail.com
 * 
 * Prints Mario-esque pyramid of a given size.
 */

#include <stdio.h>
#include <cs50.h>

int GetInput(void);
void PrintSpace(int spaces);
void PrintHash(int hashes);

int main(void)
{
    // asks user for pyramid size
    int size = GetInput();
    // initial amount of whitespace and hashtags
    int height = size - 2;
    int blocks = 2;
    
    // loops for each line of pyramid
    for (int i = 0; i < size; i++)
    {
        PrintSpace(height);
        PrintHash(blocks);
        // increments/decrements number of # and whitspace needed
        height--;
        blocks++;
        printf("\n");
    }
}    

/**
 * Gets pyramid size from user
 */
int GetInput(void)
{
    int size = -1;
    while (size < 0 || size > 23)
    {
        printf("height: ");
        size = GetInt();
    }
    return size;
}

/**
 * Prints amount of '#' passed to it
 */
void PrintHash(int hashes)
{
    int i = 0;
    while (i < hashes)
    {
        printf("#");
        i++;
    }
}

/**
 * Prints number of spaces passed to it
 */
void PrintSpace(int spaces)
{
    int i = 0;
    
    while (i <= spaces)
    {
        printf(" ");
        i++;
    }
}