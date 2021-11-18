#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get integer between 1 and 8
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height>8||height<1);

    // Create same number of rows as height
    for (int i = 0; i < height; i++)
    {
        // Print " "
        for (int n = height - 1; n > i; n--)
        {
            printf(" ");
        }

        // Print '#'
        for (int h = -1; h < i; h++)
        {
            printf("#");
        }

        // Take new line
        printf("\n");
    }
}
