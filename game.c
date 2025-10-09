/*
Name:Larmeck Gabriel
Reg No:PA106/G/28805/25
Description:c program for a number guesing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Initialize random number generator
    srand(time(0));
    secretNumber = (rand() % 20) + 1; // Generates number between 1 and 20

    printf("Guess the number:\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            break;
        }
    }

    return 0;
}
