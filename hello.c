# include <stdio.h>
# include <cs50.h>

int main(void){

    // Get the users name via input
    string name = get_string("What is your name?\n");

    // Print out Hello with users name
    printf("Hello, %s\n", name);

}
