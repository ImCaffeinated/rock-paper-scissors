/********************************************************
 * Author: Nicolas Beard
 * Date: 2025-10-19
 * Description: A simple rock-paper-scissors game.
 * ************************************************/


#include "func.h"

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main()
{

    srand(time(NULL));

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();
    checkWinner(userChoice, computerChoice);

    return 0;
}
