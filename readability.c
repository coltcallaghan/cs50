#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void){

    string input = get_string("Text: ");

    // Count letters, words, sentences
    float l = 0;
    float w = 1;
    float s = 0;

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (isalpha(input[i]))
        {
            l++;
        }
        else if(input[i] == 32)
        {
            w++;
        }
        else if (input[i] == 46 || input[i] == 33 || input[i] == 63)
        {
            s++;
        }
    }

    // Calculate average number of letters & sentences per 100 inputs
    float L = 100 * (l / w);
    float S = 100 * (s / w);

    // Calculate Coleman-Liau index
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Return result
    if (index < 1)
        {
            printf("Before Grade 1\n");
        }
        else if (index > 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", index);
        }
}
