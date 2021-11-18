#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[]){

    int digit = 0;
    int strdigit;

    if (argc != 2){
        printf("Error\n");
        return 1;
    }


    int key = atoi(argv[1]);

    if (key < 0){
        printf("Error\n");
        return 1;
    }
    else {
        string word = get_string("Plaintext: ");

        printf ("Ciphertext: ");

        for(int i = 0, n = strlen(word); i < n; i++){
            if(isupper(word[i])){
                printf("%c", (((word[i] + key) - 65) % 26) + 65);
            }
            else if(islower(word[i])){
                printf("%c", (((word[i] + key) - 97) % 26) + 97);
            }
            else {
                printf("%c", word[i]);
            }

        }
    printf("\n");
    return 0;

    }

}
