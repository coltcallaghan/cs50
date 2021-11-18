# include <stdio.h>
# include <cs50.h>

int main(void){

    // Set variables
    int pop;
    int end_pop;
    int years = 0;

    // Get start number
    do
    {
        pop = get_int("Number of alpacas: \n");
    }
    while (pop < 9);

    // Get end number
    do
    {
        end_pop = get_int("End number of alpacas: \n");
    }
    while (end_pop < pop);

    // If both equeal
    if (pop == end_pop)
    {
        printf("Years: 0");
    }
    // If not equal
    else if(pop || end_pop){
        // Calculate number of years until population is correct
        while(end_pop > pop){
        pop = pop + (pop/3) - (pop/4);
        years++;
        }
        printf("Years: %i \n", years);
    }
}
