#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;
    int userScore = 0, compScore = 0;

    srand(time(0));     //Seed the random number generator so it changes every time we run

    printf("\t-----------ROCK PAPER SCISSORS GAME-----------\n");
    printf("Rule: Rock beats Scissors | Scissors beats Paper | Paper beats Rock\n");
    printf("\t----------------------------------------------\n");

    while(1) {
        printf("Select your choice: \n");
        printf("1. Rock \n");
        printf("2. Paper \n");
        printf("3. Scissors \n");
        printf("4. Exit \n");
        printf("\nEnter Your Choice: ");
        scanf("%d", &userChoice);

        if(userChoice == 4) {
            printf("----FINAL SCOREBOARD----\n");
            printf("You: %d | Computer : %d\n", userScore, compScore);
            if(userScore > compScore) printf("WINNER: YOU! CONGRATULATIONS !!\n");
            else if(compScore > userScore) printf("WINNER: COMPUTER!!\n");
            else printf("Result: DRAW!!\n");
            break;
        }

        if(userChoice < 1 || userChoice > 4) {
            printf("Invalid Choice!! Try Again!\n");
            continue;
        }

        compChoice = (rand() % 3) + 1;    //Computer generates a random number between 1 & 3
        
        // Display Choices
        printf("You Chose: ");
        if(userChoice == 1) printf("Rock");
        else if(userChoice == 2) printf("Paper");
        else printf("Scissors");

        printf(" VS Computer Chose: ");
        if(compChoice == 1) printf("Rock ");
        else if(compChoice == 2) printf("Paper");
        else printf("Scissors");
        printf("\n");

        if(userChoice == compChoice) printf("Result: It's Draw!!\n");
        else if(userChoice == 1 && compChoice == 3 || userChoice == 2 && compChoice == 1 || userChoice == 3 && compChoice == 2) {
            printf("YOU WIN!!\n");
            userScore++;
        } else {
            printf("COMPUTER WIN!\n");
            compScore++;
        }

        printf("[YOU : %d | COMPUTER : %d]\n", userScore, compScore);  // To Show Current Score
    }
    return 0;
}

