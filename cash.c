# include <stdio.h>
# include <math.h>
# include <cs50.h>

int main(void)
{
    // Introduce variables
    int coins = 0;
    float dollars;


    // Get user input for number of dollars change needed
    do
    {
        dollars = get_float("Change needed in dollars: ");
    }
    while (dollars < 0);

    // Change dollars into cents
    int cents = round(dollars * 100);

    // Count quarters needed
    while(cents >= 25){
        cents = cents-25;
        coins++;
    }

    // Count dimes needed
    while(cents >= 10){
        cents = cents-10;
        coins++;
    }

    // Count nickles needed
    while(cents >= 5){
        cents = cents-5;
        coins++;
    }

    // Count pennys needed
    while(cents >= 1){
        cents = cents-1;
        coins++;
    }

    // Print total number of coins used
    printf("%i\n", coins);
}

