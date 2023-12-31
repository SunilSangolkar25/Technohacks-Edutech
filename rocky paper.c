#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateComputerChoice() {
    return rand() % 3; 
}

void determineWinner(int playerChoice, int computerChoice) {
    printf("You chose: ");
    switch (playerChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");
    switch (computerChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }

    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int playerChoice;

    printf("Rock-Paper-Scissors Game\n");
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1; 
    }

    srand((unsigned int)time(NULL));
    int computerChoice = generateComputerChoice();

    determineWinner(playerChoice, computerChoice);

    return 0;
}
