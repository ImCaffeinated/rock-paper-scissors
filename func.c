#include "func.h"

int getComputerChoice()
{
    return (rand() % 3) + 1;
}

int getUserChoice()
{
    int choice;

    do
    {
        printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        printf("You both chose ");
        if (userChoice == 1)
            printf("Rock \n");
        else if (userChoice == 2)
            printf("Paper \n");
        else
            printf("Scissors \n");
        printf("It's a tie! ");
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        printf("You chose ");
        if (userChoice == 1)
            printf("Rock ");
        else if (userChoice == 2)
            printf("Paper ");
        else
            printf("Scissors ");
        printf(" and the computer chose ");
        if (computerChoice == 1)
            printf("Rock\n");
        else if (computerChoice == 2)
            printf("Paper\n");
        else
            printf("Scissors\n");
        printf("You win! ");
    }
    else
    {
        printf("You chose ");
        if (userChoice == 1)
            printf("Rock ");
        else if (userChoice == 2)
            printf("Paper ");
        else
            printf("Scissors ");
        printf("and the computer chose ");
        if (computerChoice == 1)
            printf("Rock\n");
        else if (computerChoice == 2)
            printf("Paper\n");
        else
            printf("Scissors\n");
        printf("Computer wins!\n");
    }
}