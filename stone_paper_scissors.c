// Rock,Paper,Scissors play game with computer
// Made by Dhrumilpatel
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rps(char comp, char player)
{
    if (player == comp)
    {
        return 0;
    }

    if (player == 'p' && comp == 's')
    {
        return -1;
    }

    if (player == 'p' && comp == 'r')
    {
        return 1;
    }

    if (player == 'r' && comp == 'p')
    {
        return 1;
    }

    if (player == 'r' && comp == 's')
    {
        return 1;
    }

    if (player == 's' && comp == 'p')
    {
        return 1;
    }
    if (player == 's' && comp == 'r')
    {
        return -1;
    }
}
int main()
{
    char comp, player;
    int number, result;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    system("clear");
    printf("Enter 'r'  for rock or 'p' for papper or 's' for scissor \n");
    scanf("%c", &player);
    result = rps(comp, player);
    printf("You chose --> %c and computer chose --> %c.\n", player, comp);
    if (result == 1)
    {
        printf("You win the match\n");
    }
    else if (result == -1)
    {
        printf("You lose the match\n");
    }
    else if (result == 0)
    {
        printf("The match is draw\n");
    }
    else
    {
        printf("Please enter valid input\n");
    }

    return 0;
}